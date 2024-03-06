#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
     public:
     Complex();
     Complex(double,double);
     Complex operator+(Complex);
     Complex operator*(Complex);
     void Print();
     void display();
     bool operator!=(Complex);
     private:
     double Real,Imaginary;
};
#endif // COMPLEX_H_INCLUDED
