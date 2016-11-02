
// exercise1.cpp

#include "die.h"
#include "die.cpp"
#include <iomanip>
#include <iostream>

int main(void)
{
    int num_sides;
    double num_rolls = 0.0;
    int dice_tot = 0;

    std::cout << "Enter the number of sides for each die: " << std::endl;
    std::cin >> num_sides;

    die dice_1(num_sides);
    double score[num_sides];

    std::cout << "How many times will the dices be rolled? " << std::endl;
    std::cin >> num_rolls;

    for (int i = 0; i < num_sides; i++) {
        score[i] = 0;
    }
    for (int j = 0 ; j < num_rolls; j++) {

        dice_1.roll();
        dice_tot = dice_1.getValue();
        score[dice_tot - 1] = score[dice_tot - 1] + 1; 

    }
    for (int k = 0; k < num_sides; k++) {
        double percent_num = (100 / num_rolls) * score[k];
        std::cout << "the number: " << k + 10 << " occurred: " << std::setprecision(2) << percent_num << "%" << " of the time" << '\n';
    }

    return 0;
}
