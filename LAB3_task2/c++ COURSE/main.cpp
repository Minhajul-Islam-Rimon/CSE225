#include<iostream>
#include"complex.h"
#include"complex.cpp"
using namespace std;

int main()
{
    Complex c1(2 ,3);
    Complex c2(2,3);
    Complex c3;
    Complex c4;
     cout<<"Result of two complex numbers addition:"<<endl;
     c3=c1+c2;
     c3.Print(); 
      bool result=c1!=c2;
      if(result==true)
      {
        cout<<"The objects are not equal"<<endl;

      }
  
      else
      {
        cout<<"The objects are equal"<<endl;

      }
c4=c1*c2;
cout<<"The multiplication of two complex number is: "<<endl;
c4.display();


return 0;
}