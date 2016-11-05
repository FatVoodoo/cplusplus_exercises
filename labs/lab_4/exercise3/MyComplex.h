
// MyComplex.h

#ifndef _MYCOMPLEX_H
#define _MYCOMPLEX_H

class MyComplex {

    public:
        double getReal();
        void setReal(double);

        double getImag();
        void setImag(double);

        MyComplex operator+(const MyComplex &z);
        MyComplex operator-(const MyComplex &z);
        MyComplex operator*(const MyComplex &z);

        void print (const MyComplex &z);

        MyComplex(); // default ctor
        MyComplex(double a, double b);

    protected:
        double real;
        double imag;

};

#endif
