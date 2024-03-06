#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp {
private:
    int hours;
    int minutes;
    int seconds;

public:
    timeStamp(int h = 0, int m = 0, int s = 0);

    void printTime() const;

    bool operator==(const timeStamp& other) const;
};

#endif // TIMESTAMP_H_INCLUDED
