
// Gregory Kelleher 14478352

#include <iostream>
using namespace std; 

int prime(int n)
{
    int i, flag=0;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        cout << n << " " << '\0';

    return 0;
}

int main()
{
    for(int i=0; i<5001; i++)
    {
        prime(i);
    }
    return 0;
}

