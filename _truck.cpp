//
//  _truck.cpp
//  _vehicles
//
//  Implement the abstract data type Truck
//
//  Created by Jae Won Hyun on 8/2/16 for CS231 (due 081116).
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

//  edit history:
//  set constructor
//  set class for truck weight
//  get class for truck weight
//  virtual method to get start information on truck
//  virtual method to get info on truck

#include "_truck.h"
#include <string>
#include <iostream>
#include "_vehicles.h"

// truck constructor
Truck::Truck(const std::string &type, const std::string &make, const std::string &model, int pyear, double price, int weight) : Vehicle(type, make, model, pyear, price)
{
    setClass(weight);
}

// set class for truck
void Truck::setClass(int tweight)
{
    weight = tweight;
    if(weight < 0)
    {
        std::cout << "wrong weight" << std::endl;
    }
    else if(weight <= 6000)
    {
        weight = tweight;
        truckClass = "Class 1";
    }
    else if(weight > 6001 && weight < 10000)
    {
        weight = tweight;
        truckClass = "Class 2";
    }
    else if(weight > 10001 && weight < 14000)
    {
        weight=tweight;
        truckClass = "Class 3";
    }
    else if(weight> 14001 && weight < 16000)
    {
        weight=tweight;
        truckClass = "Class 4";
    }
    else if(weight>16001 && weight<19500)
    {
        weight=tweight;
        truckClass = "Class 5";
    }
    else if(weight>19501 && weight < 26000)
    {
        weight=tweight;
        truckClass = "Class 6";
    }
    else if(weight>26001 && weight < 33000)
    {
        weight=tweight;
        truckClass = "Class 7";
    }
    else if(weight>33001)
    {
        weight=tweight;
        truckClass = "Class 8";
    }
}

// get class of truck
std::string Truck::getClass()
{
    return truckClass;
}

// virtual truck start
void Truck::start()
{
    Vehicle::start();
}

// virtual truck info
void Truck::displayWindowSticker()
{
    Vehicle::displayWindowSticker();
    std::cout << "Truck Class: " << getClass() << "\n" << std::endl;
}
