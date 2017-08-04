
/*********************************************************************
 ** Program name: game.hpp
 ** Author: reuben youngblom
 ** Date: 1/29/17
 ** Description: game header file for Lab 3
 *********************************************************************/


#include "loadedDie.hpp"
using namespace std;


class Game  //game definitions
{
private:
    int playerOneSides, playerTwoSides, rounds, counter;  //die side totals, number of rounds, and roudn counter
    int player1Wins, player2Wins;  //tracks the wins
    char playerOneLoad, playerTwoLoad, turn, winner;  //tracks who is using loaded dice and the winner
    int p1score;  //win tracker, P1
    int player2score;  //p2 win tracker
public:
    char menu ();  //gameplay menu
    int roll();  //roll function
};
