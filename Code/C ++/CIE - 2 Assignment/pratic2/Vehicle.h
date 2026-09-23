#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Tester;  // Forward declaration

class Vehicle {
private:
    double engineCapacity;
    double fuelEfficiency;
    double topSpeed;

public:
    Vehicle(double engine, double fuelEff, double speed);
    
    void displayInfo() const;

    // Declare Tester as a friend class
    friend class Tester;
};

Vehicle::Vehicle(double engine, double fuelEff, double speed)
    : engineCapacity(engine), fuelEfficiency(fuelEff), topSpeed(speed) {}

void Vehicle::displayInfo() const {
    std::cout << "Vehicle Info: Engine Capacity: " << engineCapacity
              << "L, Fuel Efficiency: " << fuelEfficiency
              << " km/l, Top Speed: " << topSpeed << " km/h\n";
}

#endif // VEHICLE_H

/*

#include "Vehicle.h"

Vehicle::Vehicle(double engine, double fuelEff, double speed)
    : engineCapacity(engine), fuelEfficiency(fuelEff), topSpeed(speed) {}

void Vehicle::displayInfo() const {
    std::cout << "Vehicle Info: Engine Capacity: " << engineCapacity
              << "L, Fuel Efficiency: " << fuelEfficiency
              << " km/l, Top Speed: " << topSpeed << " km/h\n";
}

*/