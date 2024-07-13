#include "Maze.h"

Maze::Maze() { ; }

void Maze::addRoom(const Room* room) {
	this->m_rooms[room->getRoomId()] = *room;
}
const Room* Maze::getRoomById(int id) const {
	for (const Room& room : m_rooms) {
		if (room.getRoomId() == id) {
			return &room;
		}
	}
	return nullptr;
}