#include "CSquare.h"
#include <iostream>
#include <string>

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