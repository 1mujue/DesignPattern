#include <iostream>
#include "tool/log.h"
#include "abstract_factory/BombMazeFactory.h"
#include "abstract_factory/EnchantedMazeFactory.h"
#include "entity/room/BombRoom.h"
#include "entity/room/EnchantedRoom.h"

int main() {
	logCharacter('=', 50, '\n');
	logMessage("abstact factory pattern...", '\n');

	MazeFactory* mf1 = new BombMazeFactory(1);
	MazeFactory* mf2 = new EnchantedMazeFactory(2);

	Maze* m1 = mf1->makeMaze();
	Maze* m2 = mf2->makeMaze();

	logMessage("the type of m1:", ' ');
	logMessage(m1->getType(), '\n');
	logMessage("the type of m2:", ' ');
	logMessage(m2->getType(), '\n');

	logCharacter('=', 50, '\n');

	std::cin.get();
}