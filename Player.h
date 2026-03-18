#pragma once

class UPlayer
{
public:
	UPlayer();
	~UPlayer();

	void Move(int Addx, int Addy);

	int x;
	int y;
};

