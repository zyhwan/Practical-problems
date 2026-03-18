#include "Player.h"

UPlayer::UPlayer()
{
	x = 1;
	y = 1;
}

UPlayer::~UPlayer()
{
}

void UPlayer::Move(int Addx, int Addy)
{
	x += Addx;
	y += Addy;
}
