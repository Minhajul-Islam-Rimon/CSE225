#include <iostream>
#include "sortedtype.h"

class timeStamp {
private:
    int hours;
    int minutes;
    int seconds;

public:
    timeStamp(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void printTime() const {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    bool operator<(const timeStamp& other) const {
        if (hours < other.hours) return true;
        if (hours == other.hours && minutes < other.minutes) return true;
        return (hours == other.hours && minutes == other.minutes && seconds < other.seconds);
    }

    bool operator>(const timeStamp& other) const {
        return !(*this < other) && !(*this == other);
    }

    bool operator==(const timeStamp& other) const {
        return (hours == other.hours && minutes == other.minutes && seconds == other.seconds);
    }
};

int main() {
    SortedType<timeStamp> timeList;

    // Insert 5 time values in the format ssmmhh (seconds, minutes, hours)
    timeList.InsertItem(timeStamp(23, 34, 15));
    timeList.InsertItem(timeStamp(2, 13, 13));
    timeList.InsertItem(timeStamp(12, 45, 43));
    timeList.InsertItem(timeStamp(17, 36, 25));
    timeList.InsertItem(timeStamp(20, 2, 52));

    // Delete the timestamp "25 36 17"
    timeStamp deleteTime(17, 36, 25);
    timeList.DeleteItem(deleteTime);

    // Print all the time stamps in the modified list
    std::cout << "List of time stamps after deletion:" << std::endl;
    timeList.ResetList();
    timeStamp currentTime;
    for (int i = 0; i < timeList.LengthIs(); ++i) {
        timeList.GetNextItem(currentTime);
        currentTime.printTime();
    }

    return 0;
}


