
/*********************************************************************
 ** Program name: die.hpp
 ** Author: reuben youngblom
 ** Date: 1/29/17
 ** Description: die header file for Lab 3
 *********************************************************************/

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>


class Die
{
protected:  //protected, so it can be shared with LoadedDie
    int result;  //returns the roll
public:
    int roll(int sides);  //function to roll
    
};
