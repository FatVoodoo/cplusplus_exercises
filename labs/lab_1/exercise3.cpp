
// Gregory Kelleher 14478352

#include <iostream>
#include <string>
using namespace std; 

int main()
{ 
    char num[5];
    cout << "Please enter a value for num: ";
    cin >> num;

    for(int i=0; num[i] !='\0'; i++)
    {
        cout << num[i];
        cout << "   ";
    }

    return 0;
}
