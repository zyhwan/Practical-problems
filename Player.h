#pragma once

class APlayer
{
public:
	APlayer();
	~APlayer();

	void Move(int Addx, int Addy);

	int x;
	int y;
};

