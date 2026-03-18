#include "Player.h"
#include <iostream>

APlayer::APlayer()
{
	std::cout << "Player 持失切" << std::endl;
	X = 1;
	Y = 1;
}

APlayer::~APlayer()
{
	std::cout << "Player 社瑚切" << std::endl;
}

void APlayer::Move(int Addx, int Addy)
{
	X += Addx;
	Y += Addy;
}
