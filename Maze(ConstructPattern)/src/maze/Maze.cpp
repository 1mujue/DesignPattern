#include "maze/Maze.h"

Maze::Maze() { ; }

void Maze::addRoom(const Room* room) {
	this->m_rooms[room->getRoomId()] = *room;
}
Room* Maze::getRoomById(int id) const {
	for (const Room& room : m_rooms) {
		if (room.getRoomId() == id) {
			return &const_cast<Room&>(room);
		}
	}
	return nullptr;
}