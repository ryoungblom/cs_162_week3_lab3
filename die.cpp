
/*********************************************************************
 ** Program name: die.cpp
 ** Author: reuben youngblom
 ** Date: 1/29/17
 ** Description: die cpp file for Lab 3
 *********************************************************************/

#include "die.hpp"


int Die::roll(int sides)  //rolls the dice, by generating a random numer with restrictions:
{
    result = rand()%(sides); //sets result to random number (under upper bound determined by die sides)
    
    return result;  //and returns it
    
}
