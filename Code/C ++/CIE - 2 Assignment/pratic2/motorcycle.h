#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    Motorcycle(double engine, double fuelEff, double speed, bool sidecar);

    void displayMotorcycleInfo() const;
};

Motorcycle::Motorcycle(double engine, double fuelEff, double speed, bool sidecar)
    : Vehicle(engine, fuelEff, speed), hasSidecar(sidecar) {}

void Motorcycle::displayMotorcycleInfo() const {
    displayInfo();
    std::cout << "Motorcycle Specific: Has Sidecar: " << (hasSidecar ? "Yes" : "No") << "\n";
}

#endif // MOTORCYCLE_H

/*

#include "Motorcycle.h"

Motorcycle::Motorcycle(double engine, double fuelEff, double speed, bool sidecar)
    : Vehicle(engine, fuelEff, speed), hasSidecar(sidecar) {}

void Motorcycle::displayMotorcycleInfo() const {
    displayInfo();
    std::cout << "Motorcycle Specific: Has Sidecar: " << (hasSidecar ? "Yes" : "No") << "\n";
}

*/