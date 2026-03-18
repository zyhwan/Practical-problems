#include <iostream>
#include "World.h"
#include "Wall.h"
#include "Floor.h"


UWorld::UWorld()
{
	Player = new APlayer;
	Monster = new AMonster;
	Goal = new AGoal;
	Wall = new AWall;
	Floor = new AFloor;
}

UWorld::~UWorld()
{
	delete Player;
	Player = nullptr;

	delete Monster;
	Monster = nullptr;

	delete Goal;
	Goal = nullptr;

	delete Wall;
	Wall = nullptr;

	delete Floor;
	Floor = nullptr;
}

void UWorld::FinishGame(APlayer* Player, AGoal* Goal)
{
	if ((*Player).x == (*Goal).x && (*Player).y == (*Goal).y)
	{
		std::cout << "게임이 끝났습니다!" << std::endl;
	}
}
