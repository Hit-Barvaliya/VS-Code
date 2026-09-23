#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <algorithm>

#include<iomanip>

// Function to run a command and capture the output
std::string execCommand(const std::string& cmd) {
    std::array<char, 128> buffer{};
    std::string result;
    std::shared_ptr<FILE> pipe(_popen(cmd.c_str(), "r"), _pclose);
    if (!pipe) throw std::runtime_error("popen() failed!");

    while (fgets(buffer.data(), static_cast<int>(buffer.size()), pipe.get()) != nullptr) {
        result += buffer.data();
    }

    return result;
}

// Function to trim leading and trailing whitespace
std::string trim(const std::string& str) {
    const std::string whitespace = " \t\n\r";
    const auto start = str.find_first_not_of(whitespace);
    const auto end = str.find_last_not_of(whitespace);
    return (start == std::string::npos) ? "" : str.substr(start, end - start + 1);
}

int main() {
    std::vector<std::string> profiles;

    try {
        std::string output = execCommand("netsh wlan show profiles");

        std::istringstream ss(output);
        std::string line;

        // Extract Wi-Fi profile names
        while (std::getline(ss, line)) {
            if (line.find("All User Profile") != std::string::npos) {
                size_t colon = line.find(":");
                if (colon != std::string::npos) {
                    std::string profile = trim(line.substr(colon + 1));
                    profiles.push_back(profile);
                }
            }
        }

        std::cout << "Wi-Fi Name                     | Password" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;

        for (const auto& profile : profiles) {
            try {
                std::string command = "netsh wlan show profile name=\"" + profile + "\" key=clear";
                std::string profileData = execCommand(command);

                std::istringstream pss(profileData);
                std::string pline;
                std::string password = "";

                while (std::getline(pss, pline)) {
                    if (pline.find("Key Content") != std::string::npos) {
                        size_t colon = pline.find(":");
                        if (colon != std::string::npos) {
                            password = trim(pline.substr(colon + 1));
                            break;
                        }
                    }
                }

                std::cout << std::left << std::setw(30) << profile << "| " << password << std::endl;

            } catch (...) {
                std::cout << std::left << std::setw(30) << profile << "| Error reading profile" << std::endl;
            }
        }

    } catch (const std::exception& e) {
        std::cerr << "Failed to read Wi-Fi profiles: " << e.what() << std::endl;
    }

    return 0;
}
