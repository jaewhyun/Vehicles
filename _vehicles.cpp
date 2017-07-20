//
//  _vehicles.cpp
//  _vehicles
//
//  Implement the abstract data type Vehicles
//
//  Created by Jae Won Hyun on 8/2/16 for CS231 (due 081116).
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include "_vehicles.h"
#include <string>
#include <iostream>

//  edit history:
//  add constructor to initiate objects
//  set method to set vehicle type
//  set method to set producer of vehicle
//  get method for producer of vehicle
//  set method to set model
//  get method for model
//  set method for production year
//  get method for production year
//  set method for price of vehicle
//  get method for price of vehicle
//  virtual method for start instructions
//  virtual method for displaying info of vehicles


// constructor to initiate vehicle objects
Vehicle::Vehicle(const std::string &type, const std::string &make, const std::string &model, int pyear, double price)
{
    setType(type);
    setMake(make);
    setModel(model);
    setProductionyr(pyear);
    setPrice(price);
}

// set vehicle type
void Vehicle::setType(const std::string &type)
{
    vType = type;
}

// set producer
void Vehicle::setMake(const std::string &make)
{
    vMake = make;
}

// get producer
std::string Vehicle::getMake() const
{
    return vMake;
}

// set model of vehicle
void Vehicle::setModel(const std::string &model)
{
    vModel = model;
}

// get model of vehicle
std::string Vehicle::getModel() const
{
    return vModel;
}

// set production year
void Vehicle::setProductionyr(int pyear)
{
    vProductionyr = pyear;
}

// get production year
int Vehicle::getProductionyr()
{
    return vProductionyr;
}

// set price
void Vehicle::setPrice(double price)
{
    vPrice = price;
}

// get price
double Vehicle::getPrice()
{
    return vPrice;
}

// virtual method start for instructions to start the vehicle
void Vehicle::start()
{
    if(vType == "Truck")
    {
        std::cout<<"According to wikiHow, this is how you should start a truck:\n";
        std::cout<<"1. Turn the key to the start position without turning the engine on. \n";
        std::cout<<"2. Wait for the glow plugs to heat up before attempting to start the truck. \n";
        std::cout<<"3. Start the engine, but allow it to crank for no more than 30 sectonds.\n";
        std::cout<<"4. Attempt to start the vehicle again by heating the glow plugs. \n";
        std::cout<<"5. Turn the key to the start position and allow the engine to crank for no more than 30 seconds\n"<<std::endl;
    }
    else if(vType == "Car")
    {
        std::cout<<"According to wikiHow, this is how you should start a car:\n";
        std::cout<<"1. Insert the key into the ignition. \n";
        std::cout<<"2. If you're starting an automatic, put the shift selector in 'P' or 'N'. \n";
        std::cout<<"3. If you're starting a manual, put the shift selector in 'N'. \n";
        std::cout<<"4. Twist the ignition key to start the car. \n" << std::endl;
        
    }
    else if(vType == "Plane")
    {
        std::cout<<"According to wikiHow, this is how you should start a plane:\n";
        std::cout<<"1. Perform an inspection fo the aircraft before getting in. \n";
        std::cout<<"2. Locate the fligth control (column) in the cockpit. \n";
        std::cout<<"3. Locate the throttle and fuel mixture controls.\n";
        std::cout<<"4. Familiarize yourself with the flight instruments. \n";
        std::cout<<"5. Locate the landing gear controls. \n";
        std::cout<<"6. Place your feet on the rudder pedals.\n";
        std::cout<<"7. Adjust the flaps to the proper angle for takeoff. \n";
        std::cout<<"8. Perform an aircraft run-up procedure. \n";
        std::cout<<"9. Start the take-off run. \n";
        std::cout<<"10. Get up the speed. \n";
        std::cout<<"11. Pull back on the yoke at this point. \n";
        std::cout<<"12. Line up the artificial horizon, or attitude indicator. \n" <<std::endl;
    }
}

// virtual method to display vehicle info
void Vehicle::displayWindowSticker()
{
    std::cout<<"\nVehicle Make: \n"<<getMake();
    std::cout<<"\nVehicle Model: \n"<<getModel();
    std::cout<<"\nVehicle Production Year: \n"<<getProductionyr();
    std::cout<<"\nVehicle Price: "<<getPrice()<<std::endl;
}
