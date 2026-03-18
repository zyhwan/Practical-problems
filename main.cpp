#include <iostream>
#include "World.h"

using namespace std;

int main()
{
	UWorld world;

	cout << world.Player->x << endl;
	cout << &world.Player << endl;

}