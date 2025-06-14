#include "factory_method/concrete_creators/EnchantedMazeCreator.h"

EnchantedMazeCreator::EnchantedMazeCreator(int magic)
	:MazeCreator(), Enchanted(magic) {
	;
}

Maze* EnchantedMazeCreator::createMaze() {
	return this->p_maze;
}

//factory methods:
Room* EnchantedMazeCreator::makeRoom(int id) const {
	return new EnchantedRoom(id, p_magic);
}
Door* EnchantedMazeCreator::makeDoor(Room* r1, Room* r2) const {
	return new EnchantedDoor(r1, r2, p_magic);
}