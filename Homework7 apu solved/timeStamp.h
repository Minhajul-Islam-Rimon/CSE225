#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class timeStamp
{
public:
    timeStamp();
    timeStamp(int, int, int);
    void print();
    void setHours(int);
    void setMinutes(int);
    void setSeconds(int);
    int getHours();
    int getMinutes();
    int getSeconds();
    bool operator==(timeStamp);
    bool operator!=(timeStamp);
    bool operator>(timeStamp);
    bool operator<(timeStamp);

private:
    int seconds, minutes, hours;

};


#endif // TIMESTAMP_H_INCLUDED
