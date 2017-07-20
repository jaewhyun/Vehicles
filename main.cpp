//
//  main.cpp
//  _vehicles
//
//  Input values and put the code into action
//
//  Created by Jae Won Hyun on 8/2/16 for CS231 (due 081116).
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include <iostream>
#include <string>
#include "_vehicles.h"
#include "_car.h"
#include "_plane.h"
#include "_truck.h"
#include <array>
#include <vector>

//  Edit history
//  add models for car, truck, and plane
//  create a vector of 6 base class pointers
//  vehicles processed polymorphically via dynamic binding and reference
//  create pointers to iterate through the array of pointers and use the virtual functions

void virtualViaPointer(Vehicle *baseClassPtr);
void vehicleViaPointer(Vehicle *vehicleClassPtr);

int main()
{
    // input different models
    Car car1("Car", "Audi", "Q5", 2009, 40900, "Gas", "4door");
    Car car2("Car", "Toyota", "Prius", 1997, 19995, "Gasoline Hybrid", "4door");
    Truck truck1("Truck", "Ford", "Super Duty F-450XL", 2016, 53060, 8500);
    Truck truck2("Truck", "Freightliner", "114 SD Mixer", 2017, 153900, 33001);
    Plane plane1("Plane", "Boeing", "747-100B", 1968, 24000000, 4, 550);
    Plane plane2("Plane", "Airbus", "A380-800", 2005, 432600000, 4, 644);
    
    // create vector of 6 base-class pointers
    
    std::vector<Vehicle*>vehicles(6);
    
    // vehicles processed polymorphically via dynamic binding
    vehicles[0] = &car1;
    vehicles[1] = &car2;
    vehicles[2] = &truck1;
    vehicles[3] = &truck2;
    vehicles[4] = &plane1;
    vehicles[5] = &plane2;

    
    // iterate through pointers
    for(Vehicle *vehiclePtr : vehicles)
        virtualViaPointer(vehiclePtr);
    for(Vehicle *startvehiclePtr : vehicles)
        vehicleViaPointer(startvehiclePtr);
}

// call virtual method for each pointer for displaywindowsticker
void virtualViaPointer(Vehicle *baseClassPtr)
{
    baseClassPtr->displayWindowSticker();
}

// call virtual method for each pointer for start
void vehicleViaPointer(Vehicle *vehicleClassPtr)
{
    vehicleClassPtr->start();
}

