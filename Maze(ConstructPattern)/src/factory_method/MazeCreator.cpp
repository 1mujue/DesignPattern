#include "factory_method/MazeCreator.h"

void MazeCreator::initMaze() {
	this->maze = new Maze();
}

Maze* MazeCreator::createMaze() {
	return this->maze;
}

//factory methods:
Room* MazeCreator::makeRoom(int id) const {
	return new Room(id);
}
Wall* MazeCreator::makeWall() const {
	return new Wall();
}
Door* MazeCreator::makeDoor(Room* r1, Room* r2) const {
	return new Door(r1, r2);
}