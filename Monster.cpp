#include "Monster.h"

UMonster::UMonster()
{
	x = 5;
	y = 5;
}

UMonster::~UMonster()
{
}

void UMonster::Move(int Addx, int Addy)
{
	x += Addx;
	y += Addy;
}

