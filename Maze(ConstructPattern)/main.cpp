#include <iostream>
#include "tool/log.h"
#include "abstract_factory/BombMazeFactory.h"
#include "abstract_factory/EnchantedMazeFactory.h"
#include "room/BombRoom.h"
#include "room/EnchantedRoom.h"

int main() {
	logMessage("this construct pattern demonstration.");

	MazeFactory* mf1 = new BombMazeFactory(1);
	MazeFactory* mf2 = new EnchantedMazeFactory(2);

	Room* br1 = mf1->makeRoom(1);
	Room* br2 = mf2->makeRoom(2);

	br1->printInfo();
	br2->printInfo();

	std::cin.get();
}