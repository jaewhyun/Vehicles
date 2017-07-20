//
//  _vehicles.hpp
//  _vehicles
//
//  Delcare the abstract data type vehicles
//
//  Created by Jae Won Hyun on 8/2/16 for CS231 (due 081116).
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#ifndef _vehicles_h
#define _vehicles_h

#include <stdio.h>
#include <string>

class Vehicle
{
public:
    Vehicle(const std::string &, const std::string &, const std::string &, int, double); // constructor
    
    void setType(const std::string &); // set type
    
    void setMake(const std::string &); // set make
    std::string getMake() const; // get make
    
    void setModel(const std::string &); // set model
    std::string getModel() const; // get model
    
    void setProductionyr(const int); // set productino year
    int getProductionyr(); // get production year
    
    void setPrice(const double); // set price
    double getPrice(); // get price
    
    virtual void start(); // virtual method start
    virtual void displayWindowSticker(); // virtual method displaywindowsticker
        
protected:
    std::string vType;
    std::string vMake;
    std::string vModel;
    int vProductionyr;
    double vPrice;
}; // end class Vehicle


#endif /* _vehicles_h */
