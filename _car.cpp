//
//  _car.cpp
//  _vehicles
//
//  Implement the abstract data type Car
//
//  Created by Jae Won Hyun on 8/2/16 for CS231 (due 081116).
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

//  edit history:
//  add constructor for car r
//  add set and get method for car fuel
//  add set and get method for # of doors
//  add virtual method to display info of vehicle
//  add virtual method to display start info of car

#include "_car.h"
#include <string>
#include <iostream>
#include "_vehicles.h"

// constructor of car
Car::Car(const std::string &type, const std::string &make, const std::string &model, int pyear, double price, const std::string &fuel, const std::string &doorBody) : Vehicle(type, make, model, pyear, price)
{
    setFuel(fuel);
    setDoorBody(doorBody);
}

// set car fuel type
void Car::setFuel(std::string wFuel)
{
    fuel = wFuel;
}

// set # of doors
void Car::setDoorBody(std::string door)
{
    doorBody = door;
}

// get car fuel type
std::string Car::getFuel()
{
    return fuel;
}

// get # of doors
std::string Car::getDoorBody()
{
    return doorBody;
}

// virtual method start
void Car::start()
{
    Vehicle::start();
}

// virtual method displaywindowsticker
void Car::displayWindowSticker()
{
    Vehicle::displayWindowSticker();
    std::cout <<"Fuel is : "  <<getFuel() << "\n";
    std::cout <<"# of doors: "<<getDoorBody() << "\n";
}
