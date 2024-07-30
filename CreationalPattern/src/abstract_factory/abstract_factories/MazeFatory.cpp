#include "abstract_factory/abstract_factories/MazeFactory.h"

MazeFactory::MazeFactory() { ; }

/*
* MazeFactory is both an abstract factory and a concrete factory.
*/
Maze* MazeFactory::makeMaze() const {
	return new Maze("maze");
}
Wall* MazeFactory::makeWall() const {
	return new Wall();
}
Room* MazeFactory::makeRoom(int id) const {
	return new Room(id);
}
Door* MazeFactory::makeDoor(Room* r1, Room* r2) const {
	return new Door(r1, r2);
}