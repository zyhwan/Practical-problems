#include "Monster.h"

AMonster::AMonster()
{
	x = 5;
	y = 5;
}

AMonster::~AMonster()
{
}

void AMonster::Move(int Addx, int Addy)
{
	x += Addx;
	y += Addy;
}

