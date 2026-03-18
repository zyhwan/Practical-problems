#pragma once
#include "Player.h"
#include "Monster.h"
#include "Goal.h"

class AWall;
class AFloor;

class UWorld
{
public:
	UWorld();
	~UWorld();

	APlayer* Player;
	AMonster* Monster;
	AGoal* Goal;
	AWall* Wall;
	AFloor* Floor;

	void FinishGame(APlayer* Player, AGoal* Goal);
};

