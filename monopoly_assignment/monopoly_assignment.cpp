#include <iostream>
#include <fstream>

//NEED TO FIRST OF ALL READ IN 'MONOPOLY.txt' WHICH SHOULD CONTAIN ALL THE PROPERTY DETAILS
//PUT THIS IN A HEADER FILE AND FIND OUT HOW TO LINK THEM

const char POUND = 156;

class CSquare //square properties
{
public:
    int squarenum;
    int cost;
    int colourgroup;
};

class player //player properties
{
public:
    std::string name;
    int cash = 0;
    int position;
};

int main()
{
    player player1;
    player player2;
    std::cout << "Welcome to monopol-ish!\n";

    //std::ifstream monopoly("monopoly.txt", fstream::in);
}
