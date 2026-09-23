#include <iostream>
#include <iomanip>

class FuelEfficiency {
private:
    double distanceKm;
    double fuelLiters;

public:
    // Constructor
    FuelEfficiency(double distance, double fuel)
        : distanceKm(distance), fuelLiters(fuel) {}

    // Implicit conversion to double (km/l)
    operator double() const {
        if (fuelLiters == 0) return 0.0;
        return distanceKm / fuelLiters;
    }

    // Overload comparison operators
    bool operator>(const FuelEfficiency& other) const {
        return double(*this) > double(other);
    }

    bool operator<(const FuelEfficiency& other) const {
        return double(*this) < double(other);
    }

    bool operator==(const FuelEfficiency& other) const {
        return double(*this) == double(other);
    }

    // Friend function to print in a readable format
    friend std::ostream& operator<<(std::ostream& os, const FuelEfficiency& fe) {
        os << std::fixed << std::setprecision(2) << double(fe) << " km/l";
        return os;
    }
};

// Example usage
int main() {
    FuelEfficiency truck1(500, 50);     // 10 km/l
    FuelEfficiency truck2(600, 40);     // 15 km/l

    std::cout << "Truck 1 efficiency: " << truck1 << "\n";
    std::cout << "Truck 2 efficiency: " << truck2 << "\n";

    if (truck2 > truck1) {
        std::cout << "Truck 2 is more fuel efficient.\n";
    }

    double avgEfficiency = (truck1 + truck2) / 2;
    std::cout << "Average efficiency (km/l): " << avgEfficiency << "\n";

    return 0;
}

