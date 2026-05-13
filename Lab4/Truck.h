#ifndef LAB04_TRUCK_H
#define LAB04_TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int loadCapacity;
public:
    Truck(string b, int w, int load);
    
    void displayInfo() const override;
    void printUsageInstructions() const override;
};

#endif
