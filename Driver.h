//Header file for class Driver
//Function: 

#ifndef DRIVER_H
#define DRIVER_H


#include <stdexcept>
#include <iostream>
#include <string>

#include "Restaurant.h"
#include "Order.h"

using namespace std;

class Driver {
private:
    string name;
    Order forDeliv;
    bool available;
    int ordersDelivered;
    int totalDeliveryTime;
    float totalTips;

public:

    //Sets name to n, outFor is false, and forDeliv is a default order object 
    Driver(string n);

    void depart(Order o);

    void deliver(Time t, float tip);

    void arrive(Time t);

    string getName();

    bool loggedIn();

    string report();
};

#endif