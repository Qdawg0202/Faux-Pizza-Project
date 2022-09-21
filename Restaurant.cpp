#include "Restaurant.h"

using namespace std;

void Restaurant::addDriver(Driver d1)
{
  driverList.push_back(d1);
}
void Restaurant::removeDriver(string driverName)
{
  for(vector<Driver>::iterator it = driverList.begin(); it != driverList.end(); it++)
  {
    if(it->getName() == driverName)
      driverList.erase(it);
  }
}
void Restaurant::addOrder(Time placedTime, string orderName, string address)
{
  Order newOrder(placedTime, orderName, address);
  toCook.push_back(newOrder);
}
void Restaurant::serveOrder()
{
  toDeliver.push_back(toCook.front());
  toCook.pop_front();
}
void Restaurant::orderOut(Driver &d2)
{
    d2.depart(toDeliver.front());
    toDeliver.pop_front();
}
void Restaurant::status()
{
  cout << "Orders waiting to cook: " << endl;
  deque<Order>::iterator it = toCook.begin();
  while(it != toCook.end())
  {
      it->getTime().display();
      cout << " " << it->getOrder() << " to " << it->getAddress() << endl;
      *it++;
  }
  
  
  cout << "Orders waiting to depart: " << endl;
  deque<Order>::iterator im = toDeliver.begin();
  while(it != toDeliver.end())
  {
      im->getTime().display();
      cout << " " << im->getOrder() << " to " << im->getAddress() << endl;
  }
  
  
  cout << "Drivers: " << endl;
  for(vector<Driver>::iterator t = driverList.begin(); t != driverList.end(); t++)
  {
      cout << t->report(); //report prints status of driver
  }
  
}
