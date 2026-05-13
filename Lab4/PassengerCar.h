#ifndef LAB04_PASSENGERCAR_H
#define LAB04_PASSENGERCAR_H

#include "Vehicle.h"

class PassengerCar : public Vehicle {
protected:
    int passengerCapacity;
public:
    PassengerCar(string b, int w, int capacity);
    
    void displayInfo() const override;
    void printUsageInstructions() const override;

    void route(string destination) const;
    void route(string destination, int newCapacity);
};

#endif
