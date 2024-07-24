#include "prototype/MazePrototypeFactory.h"

MazePrototypeFactory::MazePrototypeFactory(Maze* maze, Wall* wall, Room* room, Door* door)
	: m_maze(maze), m_wall(wall), m_room(room), m_door(door) {
	;
}

Maze* MazePrototypeFactory::makeMaze() const {
	return nullptr;
}
Wall* MazePrototypeFactory::makeWall() const {
	return nullptr;
}
Room* MazePrototypeFactory::makeRoom(int) const {
	return nullptr;
}
Door* MazePrototypeFactory::makeDoor(Room*, Room*) const {
	return nullptr;
}