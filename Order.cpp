//
// Created by Yungs on 5/4/2022.
//

#include "Order.h"

using namespace std;

Order::Order()
{
    Time temp(0,0);
    timeTemp = temp;
    orderName = "";
    addressName = "";
}
Order::Order(Time t, string o, string a)
{
    timeTemp = t;
    orderName = o;
    addressName = a;
}
Time Order::getTime()
{
    return timeTemp;
}
string Order::getAddress()
{
    return addressName;
}
string Order::getOrder()
{
    return orderName;
}