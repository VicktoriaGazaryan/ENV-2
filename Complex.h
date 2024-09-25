#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <iostream>

class Complex {
private:
    double real; 
    double mnim; 

public:
   
    Complex(double r = 0, double m = 0) : real(r), mnim(m) {}


    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(double scalar) const;
    double absolute() const;

    void display() const;
};
#endif 