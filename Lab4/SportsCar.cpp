#include "SportsCar.h"

SportsCar::SportsCar(string b, int w, int capacity, int speed) : PassengerCar(b, w, capacity) {
    this->topSpeed = speed;
}

void SportsCar::displayInfo() const {
    PassengerCar::displayInfo();
    cout << "Максимальна швидкість: " << topSpeed << " км/год." << endl;
}

void SportsCar::printUsageInstructions() const {
    cout << "Інструкція: авто здатне розвивати швидкість до " << topSpeed << " км/год." << endl;
}
