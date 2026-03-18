#include <iostream>
#include "World.h"

UWorld::UWorld()
{
	Player = new UPlayer();
	Monster = new UMonster();
	Goal = new UGoal();
	Wall = 0;
	Floor = 1;
}

UWorld::~UWorld()
{
	delete Player;
	Player = nullptr;
	delete Monster;
	Monster = nullptr;
	delete Goal;
	Goal = nullptr;
}

void UWorld::FinishGame(UPlayer* Player, UGoal* Goal)
{
	if ((*Player).x == (*Goal).x && (*Player).y == (*Goal).y)
	{
		std::cout << "게임이 끝났습니다!" << std::endl;
	}
}
