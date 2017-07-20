//
//  _truck.hpp
//  _vehicles
//
//  Declare the abstract data type Truck
//
//  Created by Jae Won Hyun on 8/2/16 for CS231 (due 081116).
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#ifndef _truck_h
#define _truck_h

#include "_vehicles.h"
#include <stdio.h>
#include <string>

#endif /* _truck_h */

class Truck : public Vehicle
{
public:
    Truck(const std::string &, const std::string &, const std::string &, int, double, int); // constructor
    
    void setClass(int); // set class
    
    std::string getClass(); // get class
    
    virtual void start(); // start info on truck
    virtual void displayWindowSticker(); // display information of truck
    
private:
    int weight;
    std::string truckClass;
};
