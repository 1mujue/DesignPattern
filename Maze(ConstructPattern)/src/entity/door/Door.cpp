#include "door/Door.h"

Door::Door(const Room *r1,const Room *r2)
	:m_room1(const_cast<Room *>(r1)), m_room2(const_cast<Room*>(r2)) {
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

void Door::enter() {
	logMessage("enter a door.");
}

void Door::printInfo() {
	logMessage("I am a door.");
}

Door* Door::clone() {
	return nullptr;
}
