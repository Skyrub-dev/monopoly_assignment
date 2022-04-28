#pragma once
#include <iostream>
#include <string>

class CPlayer //player properties
{
public:
    std::string PlayerName = "";
    int cash = 1500;
    int position = 0;

    std::string GetName() const;
};