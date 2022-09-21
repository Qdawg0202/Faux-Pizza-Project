//Header file for class Time
//Function: Keeps track of time variables for orders, used in conjunction with order struct of restaurant class and driver class
//Has 2 private variables corresponding to hours and minutes (uses 24 hour clock)

#ifndef TIME_H
#define TIME_H

#include <stdexcept>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Time {
private:
    int hour;
    int min;

public:
    //Default constructor for time, sets hour and minute to 0;
//   Time(): hour(0), min(0)
//   {}

    //Constructor, sets hour to h and minute to 0;
    // Pre: none
    // Post: create a Time object with client-input parameters for hour (h) and minute (m)
    Time(int h, int m);

    Time();

    // Pre: none
    // Post: calculates the minutes that has elapsed up until a chosen end time
    int minutesBetween(Time end) const;

    // Pre: none
    // Post: display the Time object in "hh:mm" format
    void display() const;
};


//

#endif
