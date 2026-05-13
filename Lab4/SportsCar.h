#ifndef LAB04_SPORTSCAR_H
#define LAB04_SPORTSCAR_H

#include "PassengerCar.h"

class SportsCar : public PassengerCar {
private:
    int topSpeed;
public:
    SportsCar(string b, int w, int capacity, int speed);
    
    void displayInfo() const override;
    void printUsageInstructions() const override;
};

#endif
