#include "LabRunner.h"
#include "Vehicle.h"
#include "PassengerCar.h"
#include "Truck.h"
#include "SportsCar.h"
#include "ElectricCar.h"

void labRunner() {
    PassengerCar sedan("Toyota Camry", 1500, 5);
    Truck truck("Volvo FH", 8000, 20000);
    SportsCar porsche("Porsche 911", 1400, 2, 310);
    ElectricCar tesla("Tesla Model S", 2100, 5, 100);

    Vehicle* myVehicles[] = { &sedan, &truck, &porsche, &tesla };

    for (int i = 0; i < 4; i++) {
        myVehicles[i]->displayInfo();
        myVehicles[i]->printUsageInstructions();
        cout << "---------------------------------------" << endl;
    }

    sedan.route("Київ");
    sedan.route("Львів", 4); 
}
