#include "factory/EnchantedMazeFactory.h"

EnchantedMazeFactory::EnchantedMazeFactory()
	: MazeFactory() {
	;
}

Door* EnchantedMazeFactory::makeDoor(Room* r1, Room* r2) const {
	return new EnchantedDoor(r1, r2);
}

Room* EnchantedMazeFactory::makeRoom(int id) const {
	return new EnchantedRoom(id);
}