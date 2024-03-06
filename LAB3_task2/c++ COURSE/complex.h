/* Task 2: Recall the complex number class we discussed in our lectures. Modify the class and overload the *
(multiplication) and the != (not equal) operators for the class given below.*/




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
