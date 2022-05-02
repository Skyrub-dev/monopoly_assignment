#pragma once
#include <iostream>
#include <string>
#include <vector>
class CSquare //square properties
{
public:
    CSquare(); //constructor

    int squarenum;
    std::string squarename;
    int cost;
    int colourgroup;

    void setCSquareName(std::string);
    void setCSquarenum(int);
    void setCSquarecost(int);
    void setCSquarecolour(int);

    std::string getCSquareName() const;
    int getCSquarenum() const;
    int getCSquarecolour() const;

    virtual ~CSquare();

};
