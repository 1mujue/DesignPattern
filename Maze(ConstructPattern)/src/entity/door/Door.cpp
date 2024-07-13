#include "door/Door.h"

Door::Door(Room *r1, Room *r2)
	:m_room1(r1), m_room2(r2) {
	this->m_isOpen = false;
}

const Room* Door::otherSideFrom(const Room* room) {
	if (room == m_room1) {
		return m_room2;
	}
	else if(room == m_room2) {
		return m_room1;
	}
	return nullptr;
}

void Door::Enter() {
	logMessage("enter a door.");
}


