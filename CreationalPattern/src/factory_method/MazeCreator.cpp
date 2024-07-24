#include "factory_method/MazeCreator.h"

void MazeCreator::initMaze() {
	this->p_maze = new Maze();
}

Maze* MazeCreator::createMaze() {
	initMaze();

	Room* r1 = makeRoom(1);
	Room* r2 = makeRoom(2);
	Door* d0 = makeDoor(r1, r2);

	p_maze->addRoom(r1);
	p_maze->addRoom(r2);

	r1->setSite(North, makeWall());
	r1->setSite(South, makeWall());
	r1->setSite(East, makeWall());
	r1->setSite(West, d0);

	r2->setSite(North, makeWall());
	r2->setSite(South, makeWall());
	r2->setSite(East, d0);
	r2->setSite(West, makeWall());

	return p_maze;
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