
// Gregory Kelleher 14478352

#include <iostream>
using namespace std; 

int sum(int num_1, int num_2, int num_3)
{
    int r;
    r = num_1 + num_2 + num_3;
    return r; 
}

int average(int num_1, int num_2, int num_3)
{
    int sum = num_1 + num_2 + num_3;
    int r = sum / 3;
    return r;
}

int product(int num_1, int num_2, int num_3)
{
    int r;
    r = num_1 * num_2 * num_3;
    return r;
}

int smallest(int num_1, int num_2, int num_3)
{
    return num_1 < num_2 ? (num_1 < num_3 ? num_1 : num_3) : (num_2 < num_3 ? num_2 : num_3);
}

int largest(int num_1, int num_2, int num_3)
{
    return num_1 > num_2 ? (num_1 > num_3 ? num_1 : num_3) : (num_2 > num_3 ? num_2 : num_3);
}

int main()
{
    int num_1, num_2, num_3 = 0;
    cout << "Please enter a value for num_1: ";
    cin >> num_1;
    cout << "Please enter a value for num_2: ";
    cin >> num_2;
    cout << "Please enter a value for num_3: ";
    cin >> num_3;

    cout << "The sum of the values is: " << sum(num_1, num_2, num_3) << "\n";
    cout << "The product of the values is: " << product(num_1, num_2, num_3) << "\n";
    cout << "The average of the values is: " << average(num_1, num_2, num_3) << "\n";
    cout << "The smallest of the values is: " << smallest(num_1, num_2, num_3) << "\n";
    cout << "The largest of the values is: " << largest(num_1, num_2, num_3) << "\n";

    return 0;
}
























