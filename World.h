#pragma once
#include "Player.h"
#include "Monster.h"
#include "Goal.h"

class UWorld
{
public:
	UWorld();
	~UWorld();

	UPlayer* Player;
	UMonster* Monster;
	UGoal* Goal;

	int Wall;
	int Floor;

	void FinishGame(UPlayer* Player, UGoal* Goal);
};

