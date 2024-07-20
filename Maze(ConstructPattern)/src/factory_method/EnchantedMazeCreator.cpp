#include "factory_method/EnchantedMazeCreator.h"
#include "room/EnchantedRoom.h"
#include "door/EnchantedDoor.h"

EnchantedMazeCreator::EnchantedMazeCreator(int magic)
	:MazeCreator(), m_magic(magic) {
	;
}

Maze* EnchantedMazeCreator::createMaze() {
	return this->maze;
}

//factory methods:
Room* EnchantedMazeCreator::makeRoom(int id) const {
	return new EnchantedRoom(id, m_magic);
}
Door* EnchantedMazeCreator::makeDoor(Room* r1, Room* r2) const {
	return new EnchantedDoor(r1, r2, m_magic);
}