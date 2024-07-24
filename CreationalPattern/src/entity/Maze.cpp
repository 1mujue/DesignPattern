#include "entity/Maze.h"

Maze::Maze() 
	: m_type("maze") {
	;
}

Maze::Maze(const char* type)
	:m_type(type) {
	;
}

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

const char* Maze::getType() {
	return m_type;
}