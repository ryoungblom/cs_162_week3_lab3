
/*********************************************************************
 ** Program name: game.cpp
 ** Author: reuben youngblom
 ** Date: 1/29/17
 ** Description: game implementation file for Lab 3
 *********************************************************************/

#include "game.hpp"

char Game::menu()  //main game function that starts the game and controlls it
{
    cout << "Hello! Welcome to Dice Wars!" << endl;  //gameplay instructions, input, etc
    cout << "How many sides should Player 1's die have?" << endl;
    cin >> playerOneSides;  //records number of sides for player one's die
    
    cout << "Thanks!  How about Player 2's die?" << endl;
    cin >> playerTwoSides;  //records player 2's die sides
    
    cout << "Will Player 1 be using a loaded die?" << endl;
    cout << "Please type 'y' for yes, or 'n' for no:";
    cin >> playerOneLoad;  //tracker for whether or not player one's die is loaded
    cout << "How about Player 2?  y/n:";
    cin >> playerTwoLoad;  //tracks whether or not player 2's die is loaded
    
    cout << "Thanks!  How many rounds would you like to play?" << endl;
    cin >> rounds;  //tracks number of rounds to be played
    
    cout << "Got it! Your game will now begin. Hit any letter key and then Enter to roll:" << endl;  //instructions
    
    Die Player1;  //creates game objects.  loaded and unloaded players
    Die Player2;
    LoadedDie PlayerL1;
    LoadedDie PlayerL2;
    
    for (int i = 0; i < rounds; i++)  //loops for the specified number of rounds
    {
        int p1, p2;  //creates "score" trackers (per round)
        
        cin >> turn;  //this is just here to make user push enter for each round, for some interaction
        
        
        
        if (playerOneLoad == 'n')   //IF player one is NOT using a loaded die,
        {
            p1 = Player1.roll(playerOneSides);  //just roll like normal
            
            cout << p1 << endl;  //and output the result
            
        }
        
        else  //BUT, if player 1 is using a loaded die,
        {
            p1 = PlayerL1.loadedRoll(playerOneSides);  //use the loaded function
            
            cout << p1 << endl; //and print
            
        }
        
        
        
        if (playerTwoLoad == 'n')  //same for player 2.  If not using a loaded die
        {
            p2 = Player2.roll(playerTwoSides);  //just roll
            
            cout << p2 << endl;  //and print
        }
        
        else  //but, if the die is loaded....
        {
            p2 = PlayerL2.loadedRoll(playerTwoSides);  //use loaded die
            
            cout << p2 << endl; //and print
        }
        
        //THEN, once rolls have been made:
        
        if (p1 > p2)  //if player one won that round,
        {
            cout << "Player One Wins!" << endl;  //output the result
            p1score ++;  //and track player one's win score up one
        }
        
        else if (p2 > p1)  //but, if player two is bigger....
        {
            cout << "Player Two Wins!" << endl;  //output p2 win result
            player2score ++; //and add one to their win score
        }
        
        else
        {cout << "It's a draw!" << endl;}  //if neither is larger, it's a draw and nobody gets a point.
        
    }
    
    
    
    cout << endl;
    cout << "Thanks for playing! Here are your final results:" << endl;  //when the loop ends, give results:
    
    cout << "Player One won " << p1score << " games." << endl;  //shows p1 wins
    cout << "Player Two won " << player2score << " games." << endl;   //shows p2 wins
    
    {
        if (playerOneLoad == 'y')  //shows whether die was loaded.  If it was, show it was loaded and number of sides.
        {cout << "Player One was using a loaded die with " << playerOneSides << " sides." << endl;}
       
        else //if not, note that it was normal and show number of sides.
        {
            cout << "Player One was using a normal die with " << playerOneSides << " sides." << endl;
        }
    }
    
    
    {
        if (playerTwoLoad == 'y')  //same for player 2.  If loaded, show that it was loaded and give number of sides:
        {cout << "Player Two was using a loaded die with " << playerTwoSides << " sides." << endl;}
       
        else  //if not, say it was normal and note number of sides.
        {
            cout << "Player Two was using a normal die with " << playerTwoSides << " sides." << endl;
        }
    }
    
    
    if (p1score > player2score)  //result dependant on who won.  If p1 won, return 1, if p2, return 2.
    {winner = '1';}
    else
    {winner = '2';}
    
    return winner;  //return winner character.
    
}
