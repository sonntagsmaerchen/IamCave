#ifndef MALE_H
#define MALE_H

#include "caveman.h"

class Male : public Caveman {
public: 
    Male(int maxAge, int minAge);
    bool isMale();

};

#endif
