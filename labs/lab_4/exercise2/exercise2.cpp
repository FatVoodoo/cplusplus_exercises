
// exercise2.cpp

#include "MyComplex.h"
#include "MyComplex.cpp"
#include <iostream>

int main(void)
{

    MyComplex sum, difference, product;

    // use of ctor
    MyComplex x(2,4);

    // use of default ctor
    MyComplex y;
    y.setReal(3);
    y.setImag(0);

    std::cout << "x is: "; print(x);
    std::cout << "y is: "; print(y);

    sum = x.Add(y);
    difference = x.Subtract(y);
    product = x.Multiply(y);

    std::cout << "x + y is: "; print(sum); 
    std::cout << "x - y is: "; print(difference); 
    std::cout << "x * y is:  "; print(product); 

    return 0;
}
