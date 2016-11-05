
// MyComplex.cpp

#include <iostream>
#include "MyComplex.h"

MyComplex::MyComplex(void) {
    real = 0.0;
    imag = 0.0;
}

MyComplex::MyComplex(double r, double i) {
    real = r;
    imag = i;
}

double MyComplex::getReal() {
    return real;
}

void MyComplex::setReal(double r) {
    real = r;
}

double MyComplex::getImag() {
    return imag;
}

void MyComplex::setImag(double i) {
    imag = i;
}

void print (MyComplex &z) {
    std::cout << z.getReal() << "+" << z.getImag() << "i" << std::endl;
}

MyComplex MyComplex::operator+(const MyComplex &z) {
    MyComplex result;
    result.real = real + z.real;
    result.imag = imag + z.imag;

    return result;
}

MyComplex MyComplex::operator-(const MyComplex &z) {
    MyComplex result;
    result.real = real - z.real;
    result.imag = imag - z.imag;

    return result;
}

MyComplex MyComplex::operator*(const MyComplex &z) {
    MyComplex result;
    result.real = (real * z.real - imag * z.imag);
    result.imag = (real * z.imag + imag * z.real);

    return result;
}
