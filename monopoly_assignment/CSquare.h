#pragma once
#include <iostream>
#include <string>
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