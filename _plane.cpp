//
//  _plane.cpp
//  _vehicles
//
//  Implement the abstract data type Plane
//
//  Created by Jae Won Hyun on 8/2/16 for CS231 (due 081116).
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

//  edit history:
//  add constructor
//  set number of engines
//  get number of engines
//  set number of seats
//  get number of seats
//  virtual method for start of plane
//  virtual method to get info on plane

#include "_plane.h"
#include <string>
#include <iostream>
#include "_vehicles.h"

// constructor
Plane::Plane(const std::string &type, const std::string &make, const std::string &model, int pyear, double price, int numEngines, int numSeat) : Vehicle(type, make, model, pyear, price)
{
    setNumEngine(numEngines);
    setMaxSeat(numSeat);
}

// set number of engines
void Plane::setNumEngine(int numEngines)
{
    numEngine = numEngines;
}

// set max number of seats
void Plane::setMaxSeat(int numSeat)
{
    maxSeat = numSeat;
}

// get number of engines
int Plane::getNumEngine()
{
    return numEngine;
}

// get max number of seats
int Plane::getMaxSeat()
{
    return maxSeat;
}

// start instructions of plane
void Plane::start()
{
    Vehicle::start();
}

// display information of plane
void Plane::displayWindowSticker()
{
    Vehicle::displayWindowSticker();
    std::cout << "Number of Engines: " << getNumEngine() << std::endl;
    std::cout << "Max number of seats: " << getMaxSeat() << "\n" << std::endl;
}
