
/*********************************************************************
 ** Program name: loadedDie.cpp
 ** Author: reuben youngblom
 ** Date: 1/29/17
 ** Description: loadedDie program file for Lab 3
 *********************************************************************/

#include "loadedDie.hpp"

/*
 This function rolls the loaded die.  It takes the roll function and result variable that it inherited from Die and rolls for a result.  But, two additional things happen: first, a random number is seeded.  If the number is even (so a 50-50 shot), it ensures that the loaded roll comes back with a number that is on the upper half of what's possible for that die.  So, half the time, the loaded die will guarantee itself a number bigger than whatever half of the highest possible number is.  So on a 10-sided die, half the time, it will roll until it gets a 5 or higher.  If it's a 30 sided die, it will kick back a 15 or higher half the time.
 */


int LoadedDie::loadedRoll(int sidesL)  //loaded roll function
{
    seed = rand();  //grabs a random number
    
    if ((seed%2)==0)  //checks to see if it's even. If it is:
    {
        while (true)  //loop until:
        {
            result = roll (sidesL);  //it rolls, AND
            
            if (result > (sidesL/2))  //the result is GREATER than half of whatever is possible
            {break;}  //if that happens, break out of the loop
        }
    }  //if not, just keep rolling.
    
    
    else
    {
        result = roll(sidesL);  //however, if the random number is odd, just roll vie the Die roll function.
    }
    
    return result;  //and then return the result
}
