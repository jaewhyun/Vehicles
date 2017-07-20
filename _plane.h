//
//  _plane.h
//  _vehicles
//
//  Declare the abstract data type Plane
//
//  Created by Jae Won Hyun on 8/2/16 for CS231 (due 081116).
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//


#ifndef _plane_h
#define _plane_h


#include <stdio.h>
#include <iostream>
#include <string>
#include "_vehicles.h"

class Plane : public Vehicle
{
public:
    Plane(const std::string &, const std::string &, const std::string &, int, double, int, int); // constructor
    
    void setNumEngine(int); // set number of engines
    void setMaxSeat(int); // set max number of seats
    
    int getNumEngine(); // get number of engines
    int getMaxSeat(); // get max number of seats
    
    virtual void start(); // virtual method to start
    virtual void displayWindowSticker(); // virtual method to display info
    
private:
    int numEngine;
    int maxSeat;
};


#endif /* _plane_h */



