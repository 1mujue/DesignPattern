#include <iostream>
#include "log.h"
#include "factory/BombMazeFactory.h"
#include "factory\EnchantedMazeFactory.h"
#include "room/BombRoom.h"
#include "room/EnchantedRoom.h"

int main() {
	logMessage("this construct pattern demonstration.");

	/*MazeFactory* mf0 = new MazeFactory();
	MazeFactory* mf1 = new BombMazeFactory();
	MazeFactory* mf2 = new EnchantedMazeFactory();*/

	/*Room* br1 = mf1->makeRoom(1);
	Room* br2 = mf2->makeRoom(2);*/

	Room* br1 = new Room(1);
	Room* br2 = new Room(2);

	BombRoom* br3 = new BombRoom(3, 1);
	EnchantedRoom* br4 = new EnchantedRoom(4, 2);
	
	br1->printInfo();
	br2->printInfo();
}