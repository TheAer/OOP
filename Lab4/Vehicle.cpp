#include "Vehicle.h"

Vehicle::Vehicle(string b, int w) {
    this->brand = b;
    this->weight = w;
}

void Vehicle::displayInfo() const {
    cout << "Транспортний засіб: " << brand << " | Вага: " << weight << " кг." << endl;
}
