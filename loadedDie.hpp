
/*********************************************************************
 ** Program name: loadedDie.hpp
 ** Author: reuben youngblom
 ** Date: 1/29/17
 ** Description: loaded die header file for Lab 3
 *********************************************************************/

#include "die.hpp"

class LoadedDie: public Die  //inherits everything public or protected from Die
{
private:
    int seed;  //seeds the loaded element
public:
    int loadedRoll (int sidesL);  //and rolls the dice, by pulling inherited function "roll" from Die
};


