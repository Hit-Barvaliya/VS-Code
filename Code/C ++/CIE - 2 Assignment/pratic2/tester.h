#ifndef TESTER_H
#define TESTER_H

#include "Vehicle.h"

class Tester {
public:
    void testVehicle(const Vehicle& v) const;
};

void Tester::testVehicle(const Vehicle& v) const {
    std::cout << "[TESTER] Testing Vehicle...\n";
    std::cout << "Engine Capacity: " << v.engineCapacity << "L\n";
    std::cout << "Fuel Efficiency: " << v.fuelEfficiency << " km/l\n";
    std::cout << "Top Speed: " << v.topSpeed << " km/h\n";
}

#endif // TESTER_H

/*

#include "Tester.h"

void Tester::testVehicle(const Vehicle& v) const {
    std::cout << "[TESTER] Testing Vehicle...\n";
    std::cout << "Engine Capacity: " << v.engineCapacity << "L\n";
    std::cout << "Fuel Efficiency: " << v.fuelEfficiency << " km/l\n";
    std::cout << "Top Speed: " << v.topSpeed << " km/h\n";
}

*/