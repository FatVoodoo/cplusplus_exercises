
// Gregory Kelleher 14478352

#include <iostream>

using namespace std;

int gcd(int num_1, int num_2);

int main() {

    int num_1 = 72;
    int num_2 = 42;

    gcd(num_1, num_2);
    return 0;
}

int gcd(int num_1, int num_2) {

    int gcd_num = 1;
    for(int i=1; i<(num_1) && i<(num_2); i++) {
        if (((num_1 % i) == 0) && (num_2 % i) == 0) {
            gcd_num = i;
        }
    }
    cout << "gcd_num: " << gcd_num << '\n';
    return 0;
}













