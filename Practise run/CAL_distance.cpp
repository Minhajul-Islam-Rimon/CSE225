#include<iostream>
#include<math.h>

double distance(double x1,double x2,double y1,double y2)
{
    double dist;
    dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return dist;
}
int main()
{
    double milage=distance(10,20,30,40);
   std:: cout<<"distance is "<<milage;
    return 0;
}