#include "Player.h"

APlayer::APlayer()
{
	x = 1;
	y = 1;
}

APlayer::~APlayer()
{
}

void APlayer::Move(int Addx, int Addy)
{
	x += Addx;
	y += Addy;
}
