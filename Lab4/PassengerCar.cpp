#include "PassengerCar.h"

PassengerCar::PassengerCar(string b, int w, int capacity) : Vehicle(b, w) {
    this->passengerCapacity = capacity;
}

void PassengerCar::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Кількість місць: " << passengerCapacity << endl;
}

void PassengerCar::printUsageInstructions() const {
    cout << "Інструкція: розраховано на перевезення до " << passengerCapacity << " людей." << endl;
}

void PassengerCar::route(string destination) const {
    cout << brand << " прямує у напрямку: " << destination << endl;
}

void PassengerCar::route(string destination, int newCapacity) {
    this->passengerCapacity = newCapacity;
    cout << brand << " прямує у напрямку: " << destination 
         << ". Кількість місць оновлена до " << passengerCapacity << "." << endl;
}
