
// Gregory Kelleher 14478352

#include <iostream>
using namespace std; 

int main()
{
    int num_1, num_2 = 0;
    cout << "Please enter a value for num_1: ";
    cin >> num_1;
    cout << "Please enter a value for num_2: ";
    cin >> num_2;

    if (num_1 % num_2 == 0) 
    {
        cout << "num_1 is a multiple of num_2";
    } 
    else cout << "num_1 is not a mulitple of num_2";
    
    return 0;
} 
