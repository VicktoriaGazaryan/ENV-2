#include "complex.h"
    Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, mnim + other.mnim);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, mnim - other.mnim);
}

Complex Complex::operator*(double scalar) const {
    return Complex(real * scalar, mnim * scalar);
}

double Complex::absolute() const {
    return sqrt(real * real + mnim * mnim);
}

void Complex::display() const {
    std::cout << real << " + " << mnim << "m";
}