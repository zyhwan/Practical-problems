#pragma once
#include "Player.h"
#include "Monster.h"
#include "Goal.h"

class UWall;
class UFloor;

class UWorld
{
public:
	UWorld();
	~UWorld();

	UPlayer* Player;
	UMonster* Monster;
	UGoal* Goal;
	UWall* Wall;
	UFloor* Floor;

	void FinishGame(UPlayer* Player, UGoal* Goal);
};

