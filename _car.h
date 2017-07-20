//
//  _car.hpp
//  _vehicles
//
//  Declare the abstract data type Car
//
//  Created by Jae Won Hyun on 8/2/16 for CS231 (due 081116).
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#ifndef _car_h
#define _car_h

#include <stdio.h>
#include <string>
#include "_vehicles.h"

class Car : public Vehicle
{
public:
    // constructor
    Car(const std::string &, const std::string &, const std::string &, int, double, const std::string &, const std::string &);
    
    void setFuel(std::string); // set fuel
    void setDoorBody(std::string); // set # of doors
    
    std::string getFuel(); // get fuel
    std::string getDoorBody(); // get # of doors
    
    virtual void start(); // virtual method start
    virtual void displayWindowSticker(); // virtual method displaywindowsticker
    
    
private:
    std::string fuel;
    std::string doorBody;
    
    
    
};
#endif /* _car_h */
