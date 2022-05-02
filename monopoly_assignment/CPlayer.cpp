#include "CPlayer.h"
//derrived attributes from main class CPlayer
CPlayer::CPlayer(std::string PlayerName, int cash, int position) : PlayerName(PlayerName), cash(cash), position(position)
{
	PlayerName = "";
	cash = 1500;
	position = 0;
}
//returns the player name
std::string CPlayer::GetName() const
{
	return PlayerName;
}
//returns the player class
int CPlayer::GetCash() const
{
	return cash;
}
//returns the player position
int CPlayer::GetPos() const
{
	return position;
}
//destructor
CPlayer::~CPlayer()
{

}