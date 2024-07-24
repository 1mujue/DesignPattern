#include "entity/door/Door.h"

Door::Door(const Room *r1,const Room *r2)
	:p_room1(const_cast<Room *>(r1)), p_room2(const_cast<Room*>(r2)), p_isOpen(false) {
	;
}

Door::Door(const Door& other)
	: p_room1(other.p_room1), p_room2(other.p_room2),p_isOpen(false) {
	;
}

const Room* Door::otherSideFrom(const Room* room) {
	if (room == p_room1) {
		return p_room2;
	}
	else if(room == p_room2) {
		return p_room1;
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
	return new Door(*this);
}

void Door::initialize(Room* r1 , Room* r2){
	p_room1 = r1;
	p_room2 = r2;
};