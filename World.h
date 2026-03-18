#pragma once
#include "Player.h"

//class UPlayer;
class UMonster;
class UGoal;

class UWorld
{
public:
	UWorld();
	~UWorld();

	UPlayer* Player;
	UMonster* Monster;
	UGoal* Goal;

	void FinishGame(UPlayer* Player, UGoal* Goal);

	int Wall;
	int Floor;

};

