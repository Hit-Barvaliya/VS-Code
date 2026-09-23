#include "Car.h"
#include "Motorcycle.h"
#include "Tester.h"

int main() {
    // Create objects
    Car myCar(2.0, 15.5, 220, 4);
    Motorcycle myBike(1.2, 30.0, 180, false);
    
    // Display object details
    myCar.displayCarInfo();
    std::cout << "------------------------\n";
    myBike.displayMotorcycleInfo();
    std::cout << "------------------------\n";

    // Testing
    Tester vehicleTester;
    vehicleTester.testVehicle(myCar);
    std::cout << "------------------------\n";
    vehicleTester.testVehicle(myBike);

    return 0;
}
