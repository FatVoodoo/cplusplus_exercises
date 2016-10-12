// Gregory Kelleher 14478352

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;

int roll();
int dice_sum();
void percent(int freq[]);

int main(void) {

    int roll_num;
    srand (time(NULL));
    int freq[11] = {0};

    cout << "Enter the number of rolls: " << '\n';
    cin >> roll_num;

    for(int i=0; i<roll_num; i++) {
        int count = dice_sum();
        freq[count]++;
    }

    percent(freq);

    return 0;
}

int roll() {
    int rand_num = rand() % 6 + 1;
    return rand_num;
}

int dice_sum() {
    int die_1 = roll();
    int die_2 = roll();
    int sum = die_1 + die_2;
    return sum;
}

void percent(int freq[]) {

    float percent_num = 0;
    
    for (int i = 0; i < 12; i++) {
        float num = (float)freq[i];
        percent_num = ((num / 12) * 100);
        cout << "the number: " << i << " occurred: " << setprecision(2) << percent_num << "%" << " of the time" << '\n';
        
    }
}


