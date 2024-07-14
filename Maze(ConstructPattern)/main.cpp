#include <iostream>
#include "tool/log.h"
#include "factory/BombMazeFactory.h"
#include "factory\EnchantedMazeFactory.h"
#include "room/BombRoom.h"
#include "room/EnchantedRoom.h"

int main() {
	logMessage("this construct pattern demonstration.");

	MazeFactory* mf1 = new BombMazeFactory();
	MazeFactory* mf2 = new EnchantedMazeFactory();

	Room* br1 = mf1->makeRoom(1);
	Room* br2 = mf2->makeRoom(2);

	br1->printInfo();
	br2->printInfo();

	std::cin.get();
}