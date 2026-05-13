#ifndef LAB04_VEHICLE_H
#define LAB04_VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int weight;
public:
    Vehicle(string b, int w);
    virtual ~Vehicle() = default;
    
    virtual void printUsageInstructions() const = 0;
    virtual void displayInfo() const;
};

#endif
