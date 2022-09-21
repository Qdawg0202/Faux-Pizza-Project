//Restaurant header file
//Contains: Vector of driver objects, a definition of order struct, a queue of order for cooking (only used by restaurant) 
//          as well as one for delivery (This will be the one used by driver)
//Functions: Add/Remover driver, Add/Remove an order, add/removed served orders, status

#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <stdexcept>
#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <iomanip>

#include "Driver.h"
#include "Time.h"

using namespace std;

class Restaurant
{
  private:
    vector<Driver> driverList;
    deque<Order> toCook;
    deque<Order> toDeliver;
    int delivered;
  
  public:
    //adds a driver to the vector of drivers
    void addDriver(Driver d1);
  
    //removes a driver from the vector with a given name
    void removeDriver(string name);
  
    //adds an order with a given time, order name, and address
    void addOrder(Time placedTime, string orderName, string address);
  
    //removes an order from the cookingList deque and adds one to the toDeliver deque
    void serveOrder();
  
    //pops an order from the deque of toDelivers assigns it to a driver, changes drivers deliverying status, and adds an
    void orderOut(Driver &d2);
  
    //displays the status of restaurant
    //lists order waiting to cook, orders awaiting, and lists driver status
    void status();
  
};

#endif
