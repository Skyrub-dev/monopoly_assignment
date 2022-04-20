#include <iostream>
#include <iterator>
#include <fstream>
#include <map>
//#include "random.h"
#include <vector>
#include <algorithm>
#include <string>
#include <memory>

//NEED TO FIRST OF ALL READ IN 'MONOPOLY.txt' WHICH SHOULD CONTAIN ALL THE PROPERTY DETAILS
//PUT THIS IN A HEADER FILE AND FIND OUT HOW TO LINK THEM

//const char POUND = 156;

class CSquare //square properties
{
public:
    //CSquare(std::vector<CSquare*>&);
    
    int squarenum;
    std::string squarename;
    int cost;
    int colourgroup;

    void setCSquareName(std::string);
    void setCSquarenum(int);
    //up for removal if can't get it working
    void setCSquarecost(int);
    void setCSquarecolour(int);

    std::string getCSquareName() const;
    int getCSquarenum() const;
    int getCSquarecolour() const;

};

void CSquare::setCSquareName(std::string CSquarename)
{
    squarename = CSquarename;
}

void CSquare::setCSquarenum(int CSquarenum)
{
    squarenum = CSquarenum;
}

void CSquare::setCSquarecost(int CSquarecost)
{
    cost = CSquarecost;
}

void CSquare::setCSquarecolour(int CSquarecolour)
{
    colourgroup = CSquarecolour;
}

std::string CSquare::getCSquareName() const
{
    return squarename;
}

int CSquare::getCSquarenum() const
{
    return squarenum;
}

int CSquare::getCSquarecolour() const
{
    return colourgroup;
}

class player //player properties
{
public:
    std::string name;
    int cash;
    int position;
};

int main()
{
    player player1;
    player player2;

    
    int i = 0;
    std::string line;
    std::string Squarename;
    std::cout << "Welcome to monopol-ish!\n";
    const int MAX_SIZE = 26;
    std::ifstream monopoly("Monopoly.txt");

    //std::getline(monopoly, line[i]);

    std::vector<CSquare*> CSquareVector;
    if (monopoly.is_open()) //checks if the file is open
    {
        CSquare myArray[MAX_SIZE]; //declares the array of the object cSquare class

        std::getline(monopoly, line); //allows file to be read line by line
        std::string sname; //string to store what I read in from my file

        while (i < MAX_SIZE && monopoly >> sname) //inputs the contents of the file into the string sname
        {
            myArray[i].setCSquareName(sname); //store the string read in into the array
            std::cout << myArray[i].getCSquareName(); //it outputs what is stored in the array here
            i++; //adds one each time to the i counter
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

    player1.name = "Hamster";
    player1.cash = 1500;
    player1.position = 0;

    player2.name = "Pumpkin";
    player2.cash = 1500;
    player2.position = 0;

    
    _CrtDumpMemoryLeaks();
}
