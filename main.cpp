#include <iostream>
#include "World.h"

using namespace std;

int main()
{
	UWorld world;

	cout << "플레이어 위치: " << world.Player->x << ", " << world.Player->y << endl;
	cout << "몬스터 위치: " << world.Monster->x << ", " << world.Monster->y << endl;
	cout << "Goal 위치: " << world.Goal->x << ", " << world.Goal->y << endl;

}