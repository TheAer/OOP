#include "Truck.h"

Truck::Truck(string b, int w, int load) : Vehicle(b, w) {
    this->loadCapacity = load;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Вантажопідйомність: " << loadCapacity << " кг." << endl;
}

void Truck::printUsageInstructions() const {
    cout << "Інструкція: не перевищувати вагу вантажу в " << loadCapacity << " кг." << endl;
}
