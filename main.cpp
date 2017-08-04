
/*********************************************************************
 ** Program name: main.cpp
 ** Author: reuben youngblom
 ** Date: 1/29/17
 ** Description: main cpp file for Lab 3
 *********************************************************************/


#include "game.hpp"
using namespace std;

int main() {

    
    srand (time(NULL));  //seeds the random numbers needed (code taken from Stack Overflow)
    char whoWon;  //tracks the ultimate winner
    Game war;  //creates Game object for playing
    
    whoWon = war.Game::menu();  //whoWon will hold either 1 or 2 after this
    
    if (whoWon == '1')  //if it holds 1, p1 won, so print that result
    {cout << "Player One is the champion!" << endl;}
    
    else  //if not, p2 won, so print that.
    {cout << "Player Two is the champion!" << endl;}
    
    
    return 0;
}
