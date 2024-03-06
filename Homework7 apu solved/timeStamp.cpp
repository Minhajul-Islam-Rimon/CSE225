#include "timestamp.h"
#include <iostream>
using namespace std;

timeStamp::timeStamp()
{
    hours = minutes = seconds = 0;
}

timeStamp::timeStamp(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

void timeStamp::setHours(int h)
{
    hours = h;
}

void timeStamp::setMinutes(int m)
{
    minutes = m;
}

void timeStamp::setSeconds (int s)
{
    seconds = s;
}

int timeStamp::getHours()
{
    return hours;
}

int timeStamp::getMinutes()
{
    return minutes;
}

int timeStamp::getSeconds()
{
    return seconds;
}

void timeStamp::print()
{
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

bool timeStamp::operator==(timeStamp t)
{
    return ((seconds+60*minutes+3600*hours)==(t.seconds+60*t.minutes+3600*t.hours));
}

bool timeStamp::operator!=(timeStamp t)
{
    return ((seconds+60*minutes+3600*hours)!=(t.seconds+60*t.minutes+3600*t.hours));
}

bool timeStamp::operator>(timeStamp t)
{
    return ((seconds+60*minutes+3600*hours)>(t.seconds+60*t.minutes+3600*t.hours));
}

bool timeStamp::operator<(timeStamp t)
{
    return ((seconds+60*minutes+3600*hours)<(t.seconds+60*t.minutes+3600*t.hours));
}
