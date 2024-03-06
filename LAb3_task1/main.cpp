#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
    dynArr <double>obj1;
    dynArr <double>obj2(5);
    double input;
    cout<<"Enter 5 values "<<endl;
    for (int i=0; i<5; i++)
    {
        cout<<"Element "<<i+1<<" : ";
        cin>>input;
        obj2.setValue(i, input);
    }

    cout<<"Your Entered Array is: ";
    for (int i=0; i<5; i++)
    {
        cout<<obj2.getValue(i)<<" ";
    }

}