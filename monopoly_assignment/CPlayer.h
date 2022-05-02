#pragma once
#include <iostream>
#include <string>

class CPlayer //player properties
{
public:
    CPlayer(std::string, int, int); //constructor
    std::string PlayerName;
    int cash;
    int position;

    std::string GetName() const;
    int GetCash() const;
    int GetPos() const;

    virtual ~CPlayer();
};