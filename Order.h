//
// Created by Yungs on 5/4/2022.
//

#ifndef ORDER_H
#define ORDER_H

#include "Time.h"
#include <iostream>
#include <string>

using namespace std;

class Order
{
private:
    Time timeTemp;
    string orderName;
    string addressName;

public:
    Order();
    Order(Time t, string o, string a);
    Time getTime();
    string getOrder();
    string getAddress();
};


#endif