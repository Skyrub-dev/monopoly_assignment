#include <iostream>
#include <iterator>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <memory>
#include "CSquare.h"
#include "CPlayer.h"
#include "random.h"

int main()
{   
    int i = 0;
    std::string line;
    std::cout << "Welcome to monopol-ish!\n";
    const int MAX_SIZE = 26;
    std::ifstream monopoly("Monopoly.txt"); //reading the file in
    CSquare setupArr[MAX_SIZE]; //declaring the array
    //std::vector<CSquare*> CSquareVector;
    if (monopoly.is_open())
    {
        std::getline(monopoly, line); //reads the file into a string
        std::string sname; //declaring a string to store the file in

        while (i < MAX_SIZE && monopoly >> sname) //inputs the contents of the file into the string sname
        {
            setupArr[i].setCSquareName(sname); //store the string read in into the array
            i++; //increments to i everytime it's run
        }
    }
    else
    {
        std::cout << "Error opening file";
    }

    CPlayer player1 ("Hamster", 1500, 0);
    CPlayer player2 ("Pumpkin", 1500, 0);
    

    for (int i = 0; i < 20; i++) //plays for 20 rounds
    {
        std::cout << "Round " << i << std::endl; //starting with player 1
        std::cout << player1.PlayerName << " Rolls: " << Random();
        player1.position += Random(); //will add the number of the dice to the player position
        std::cout << player1.PlayerName << " Lands on a square \n";

        if (player1.position > 26) //if player position is greater than the board, reset back to 0
        {
            player1.position = 0;
            player1.position += Random();
        }

        if (player1.position == 2) //if player position is at 2, they're at a 'GO' square
        {
            player1.cash += 200;
            std::cout << player1.PlayerName << " Passes GO and collects" << "200";
        }

        std::cout << "Round " << i << std::endl; //player 2 begins once player 1 has finished
        std::cout << player1.PlayerName << " Rolls: " << Random();
        player2.position += Random();
        std::cout << player2.PlayerName << " Lands on a square\n" << std::endl;

        if (player2.position > 26)
        {
            player2.position = 0;
            player2.position += Random();
        }

        if (player2.position == 2)
        {
            player2.cash += 200;
            std::cout << player2.PlayerName << " Passes GO and collects 200\n";
        }
    }

    //end of game totals each players total
    std::cout << "Game over\n";
    std::cout << player1.PlayerName << "has" << player1.cash << std::endl;
    std::cout << player2.PlayerName << "has" << player2.cash << std::endl;
    if (player1.cash > player2.cash)
    {
        std::cout << "Hamster wins!";
    }
    else if (player2.cash > player1.cash)
    {
        std::cout << "Pumpkin wins!";
    }
    else
    {
        std::cout << "No one wins, it's a draw!";
    }

    

    
    _CrtDumpMemoryLeaks();
}
