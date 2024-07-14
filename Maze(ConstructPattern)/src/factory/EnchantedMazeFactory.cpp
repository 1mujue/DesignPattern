#include "factory/EnchantedMazeFactory.h"

EnchantedMazeFactory::EnchantedMazeFactory()
	: MazeFactory() {
	;
}

Door* EnchantedMazeFactory::makeDoor(Room* r1, Room* r2) const {
	int magic = inputMagic("please input magic of an enchanted door:");
	return new EnchantedDoor(r1, r2, magic);
}

Room* EnchantedMazeFactory::makeRoom(int id) const {
	int magic = inputMagic("please input magic of an enchanted room:");
	return new EnchantedRoom(id);
}

int EnchantedMazeFactory::inputMagic(const char* message) const {
	int magic;
	logMessage(message);
	std::cin >> magic;
	return magic;
}