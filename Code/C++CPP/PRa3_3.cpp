#include <iostream>
#include <string>
#include <stdexcept>

long long power(long long a, long long n)
{
    long long res = 1;
    long long base = a;
    long long exponent = n;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            res *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return res;
}

long long power_mod(long long a, long long n, long long m)
{
    if (m == 0)
    {
        throw std::invalid_argument("Modulus m cannot be zero.");
    }
    long long res = 1;
    long long base = a % m;
    long long exponent = n;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            res = (res * base) % m;
        }
        base = (base * base) % m;
        exponent /= 2;
    }
    return res;
}

int main()
{
    std::cout << "--- Problem 3: Session Key Generator ---\n";
    long long a, n;
    std::cout << "Enter base a: ";
    if (std::cin >> a)
    {
        std::cout << "Enter exponent n: ";
        if (std::cin >> n)
        {
            std::cout << "Enter modulus m (press Enter or 0 to skip): ";
            std::string m_input;

            std::cin.ignore(256, '\n');
            std::getline(std::cin, m_input);
            if (n < 0)
            {
                std::cout << "Error: Exponent n must be non-negative.\n";
            }
            else if (m_input.empty() || m_input == "0")
            {
                long long val = power(a, n);
                std::cout << "Result: " << a << "^" << n << " = " << val << "\n";
            }
            else
            {
                try
                {
                    long long m = std::stoll(m_input);
                    long long val_no_mod = power(a, n);
                    long long val_mod = power_mod(a, n, m);
                    std::cout << "Result: " << a << "^" << n << " = " << val_no_mod << "\n";
                    std::cout << "Result mod " << m << ": " << a << "^" << n << " mod " << m << " = " << val_mod << "\n";
                }
                catch (const std::exception &e)
                {
                    std::cout << "Error: Invalid input. " << e.what() << "\n";
                }
            }
        }
    }
    return 0;
}
