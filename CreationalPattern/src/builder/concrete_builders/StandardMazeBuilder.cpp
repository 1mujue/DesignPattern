#include "builder/concrete_builders/StandardMazeBuilder.h"
#include "entity/room/Room.h"
#include "entity/door/Door.h"
#include "entity/wall/Wall.h"

StandardMazeBuilder::StandardMazeBuilder() {	
	m_currentMaze = nullptr; 
}

void StandardMazeBuilder::buildMaze() {
	m_currentMaze = new Maze();
}

Maze* StandardMazeBuilder::getMaze() {
	return m_currentMaze;
}

void StandardMazeBuilder::buildDoor(int roomFromId, int roomToId) {
	Room* r1 = m_currentMaze->getRoomById(roomFromId);
	Room* r2 = m_currentMaze->getRoomById(roomToId);
	Door* d0 = new Door(r1, r2);

	r1->setSite(this->commonWall(r1, r2), d0);
	r2->setSite(this->commonWall(r2, r1), d0);
}

void StandardMazeBuilder::buildRoom(int roomId) {
	Room* room = new Room(roomId);
	m_currentMaze->addRoom(room);

	room->setSite(North, new Wall());
	room->setSite(South, new Wall());
	room->setSite(East, new Wall());
	room->setSite(West, new Wall());
}

Direction StandardMazeBuilder::commonWall(Room* r1, Room* r2) {
	//simplified.
	return North;
}