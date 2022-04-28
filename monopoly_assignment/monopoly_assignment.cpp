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
    //SetUp();
    //Need constructors and destructors in the classes
    
    int i = 0;
    std::string line;
    std::string Squarename;
    std::cout << "Welcome to monopol-ish!\n";
    const int MAX_SIZE = 26;
    std::ifstream monopoly("Monopoly.txt");

    //std::getline(monopoly, line[i]);

    //std::vector<CSquare*> CSquareVector;
    if (monopoly.is_open()) //checks if the file is open
    {
        CSquare setupArr[MAX_SIZE]; //declares the array of the object cSquare class

        std::getline(monopoly, line); //allows file to be read line by line
        std::string sname; //string to store what I read in from my file

        while (i < MAX_SIZE && monopoly >> sname) //inputs the contents of the file into the string sname
        {
            setupArr[i].setCSquareName(sname); //store the string read in into the array
            std::cout << setupArr[i].getCSquareName(); //it outputs what is stored in the array here
            i++; //adds one each time to the i counter
        }
    }
    else
    {
        std::cout << "Error opening file";
    }

    CPlayer player1;
    CPlayer player2;

    player1.PlayerName = "Hamster";
    player1.cash = 1500;
    player1.position = 0;

    player2.PlayerName = "Pumpkin";
    
    //int dice = Random();

    for (int i = 0; i < 20; i++)
    {
        std::cout << "Round " << i << std::endl;
        std::cout << player1.PlayerName << "Rolls: " << Random();
        player1.position += Random();

        if (player1.position == 2)
        {
            player1.cash += 200;
            std::cout << player1.PlayerName << "Passes GO and collects" << 200;
        }
    }

    //vector_of_pointers.push_back(line[i]);

    /*while (std::getline(monopoly, line))
    {
        vector_of_pointers.push_back(line);
    }*/
    //remember to include 'delete [] vector_of_pointers;'

    //if (monopoly.is_open()) //checks if the file is open
    //{
    //    CSquare myArray[MAX_SIZE]; //declares the array of the object cSquare class

    //    getline(monopoly, discard); //allows file to be read line by line
    //    std::string sname; //string to store what I read in from my file

    //    while (i < MAX_SIZE && monopoly >> sname) //inputs the contents of the file into the string sname
    //    {
    //        myArray[i].setSquareName(sname); //store the string read in into the array
    //        std::cout << myArray[i].getSquareName(); //it outputs what is stored in the array here
    //        i++; //adds one each time to the i counter
    //    }
    //}

    

    
    _CrtDumpMemoryLeaks();
}
