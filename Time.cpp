#include "Time.h"

using namespace std;

Time::Time(int h, int m)
{
    hour = h;
    min = m;
}

int Time::minutesBetween(Time end) const
{
    if (hour != end.hour)
    {
        int hour_between = end.hour - hour;
        int hour_to_min = abs(hour_between) * 60;
        int minute_between = (end.min - min) + hour_to_min;
        return minute_between;
    }

    else
    {
        int minute_between = abs(end.min - min);
        return minute_between;
    }
}


void Time::display() const
{
    cout << setfill('0') << setw(2) << to_string(hour) << ':' << setfill('0') << setw(2) << to_string(min);
}


