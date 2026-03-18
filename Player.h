#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer();
	~APlayer();

	void Move(int Addx, int Addy);
};

