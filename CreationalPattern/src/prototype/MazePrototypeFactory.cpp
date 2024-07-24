#include "prototype/MazePrototypeFactory.h"

MazePrototypeFactory::MazePrototypeFactory(Maze* maze, Wall* wall, Room* room, Door* door)
	: m_maze(maze), m_wall(wall), m_room(room), m_door(door) {
	;
}

Maze* MazePrototypeFactory::makeMaze() const {
	return m_maze->clone();
}
Wall* MazePrototypeFactory::makeWall() const {
	return m_wall->clone();
}
Room* MazePrototypeFactory::makeRoom(int id) const {
	Room* room = m_room->clone();
	room->initialize(id);
	return room;
}
Door* MazePrototypeFactory::makeDoor(Room* r1, Room* r2) const {
	Door* door = m_door->clone();
	door->initialize(r2, r1);
	return door;
}