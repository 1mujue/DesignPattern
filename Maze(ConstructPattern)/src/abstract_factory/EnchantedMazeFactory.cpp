#include "abstract_factory/EnchantedMazeFactory.h"

EnchantedMazeFactory::EnchantedMazeFactory(int magic)
	: MazeFactory(), m_magic(magic) {
	;
}

Door* EnchantedMazeFactory::makeDoor(Room* r1, Room* r2) const {
	return new EnchantedDoor(r1, r2, m_magic);
}

Room* EnchantedMazeFactory::makeRoom(int id) const {
	return new EnchantedRoom(id);
}