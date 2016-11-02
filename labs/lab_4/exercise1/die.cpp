
// die.cpp
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "die.h"

int sides;
int value;

die::die(int size) {

    if (size < 4) {

        sides = 6;

        std::cout << "Error: dice has less than four sides" << std::endl;
        std::cout << "dice defaults size to 6 sides. " << std::endl;
    } else {
        sides = size;
    }
}

void die::roll() {
    value = rand() % sides + 1;
}

int die::getNumSides(){
    return sides;
}

int die::getValue(){
    return value;
}



