#ifndef LAB04_ELECTRICCAR_H
#define LAB04_ELECTRICCAR_H

#include "PassengerCar.h"

class ElectricCar : public PassengerCar {
private:
    int batteryCapacity;
public:
    ElectricCar(string b, int w, int capacity, int battery);
    
    void displayInfo() const override;
    void printUsageInstructions() const override;
};

#endif
