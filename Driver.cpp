#include "Driver.h"

using namespace std;

Driver::Driver(string n)
{
    name = n;
    available = true;
    Time defaultTime(0,0);
    Order defaultOrder;

    forDeliv = defaultOrder;
    ordersDelivered = 0;
    totalDeliveryTime = 0;
    totalTips = 0;
}
void Driver::depart(Order o)
{
    forDeliv = o;
    available = false;
}
void Driver::deliver(Time time, float tip)
{
    totalDeliveryTime += forDeliv.getTime().minutesBetween(time);
    totalTips += tip;
    available = true;
}
void Driver::arrive(Time time)
{
  totalDeliveryTime += forDeliv.getTime().minutesBetween(time);
  available = true;
}
string Driver::getName()
{
  return name;
}
bool Driver::loggedIn()
{
  return available;
}
string Driver::report()
{
    if(available)
    {
        return "Driver: " + name + " is currently on standby";
    }
    else
    {
        return "Driver: " + name + " is delivering " + forDeliv.getOrder() + " to " + forDeliv.getAddress() + " and departed at ";
        forDeliv.getTime().display();
    }
}

