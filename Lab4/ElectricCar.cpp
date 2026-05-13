#include "ElectricCar.h"

ElectricCar::ElectricCar(string b, int w, int capacity, int battery) : PassengerCar(b, w, capacity) {
    this->batteryCapacity = battery;
}

void ElectricCar::displayInfo() const {
    PassengerCar::displayInfo();
    cout << "Ємність батареї: " << batteryCapacity << " кВт-год." << endl;
}

void ElectricCar::printUsageInstructions() const {
    cout << "Інструкція: підтримуйте заряд батареї (" << batteryCapacity << " кВт-год) вище 20%." << endl;
}
