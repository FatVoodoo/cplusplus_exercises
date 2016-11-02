
// die.h

#ifndef _DIE_H
#define _DIE_H

class die {

    public:
        die(int num_sides);                         
        int getValue();
        int getNumSides();
        void roll();

    private:
        int size;
        int value;
};

#endif
