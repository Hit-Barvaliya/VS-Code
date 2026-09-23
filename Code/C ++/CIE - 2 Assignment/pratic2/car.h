#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(double engine, double fuelEff, double speed, int doors);

    void displayCarInfo() const;
};

Car::Car(double engine, double fuelEff, double speed, int doors)
    : Vehicle(engine, fuelEff, speed), numberOfDoors(doors) {}

void Car::displayCarInfo() const {
    displayInfo();
    std::cout << "Car Specific: Number of Doors: " << numberOfDoors << "\n";
}

#endif // CAR_H

/*
#include "Car.h"

Car::Car(double engine, double fuelEff, double speed, int doors)
    : Vehicle(engine, fuelEff, speed), numberOfDoors(doors) {}

void Car::displayCarInfo() const {
    displayInfo();
    std::cout << "Car Specific: Number of Doors: " << numberOfDoors << "\n";
}

*/