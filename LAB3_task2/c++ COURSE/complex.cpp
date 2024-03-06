#include"complex.h"
#include<iostream>
using namespace std;
Complex::Complex()
{
    Real=0;
    Imaginary=0;
}
Complex::Complex(double r,double i)
{
    Real=r;
    Imaginary=i;
}
Complex Complex::operator+(Complex a)
{
    Complex t;
    t.Real=Real+a.Real;
    t.Imaginary=Imaginary+a.Imaginary;
    return t;

}
Complex Complex::operator *(Complex c)
{
    Complex d;
    d.Real=(Real* c.Real)-(Imaginary*c.Imaginary);
    d.Imaginary=(Real*c.Imaginary)+(Imaginary*c.Real);
    
    return d;

}
void Complex::Print()
{
   cout << Real << " + " << Imaginary << "i" << endl;
}
void Complex::display()
{
    cout<<Real<<"+"<<Imaginary<<"i"<<endl;
}
bool Complex::operator!=(Complex b)
{
    bool result=(Real!=b.Real)||(Imaginary!=b.Imaginary);
    return result;
}