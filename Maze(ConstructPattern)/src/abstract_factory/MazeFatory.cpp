#include "abstract_factory/MazeFactory.h"

MazeFactory::MazeFactory() { ; }

Maze* MazeFactory::makeMaze() const {
	return new Maze();
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