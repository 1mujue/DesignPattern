#include "entity/room/Room.h"

Room::Room(int id)
	:p_roomId(id) {
	for (int i = 0; i < 4; ++i) {
		p_sites[i] = nullptr;
	}
}

Room::Room(const Room& other)
	: p_roomId(other.p_roomId) {
	for (int i = 0; i < 4; ++i) {
		p_sites[i] = nullptr;
	}
}

const int Room::getRoomId() const {
	return this->p_roomId;
}

const MapSite* Room::getSite(const Direction& direction) {
	return p_sites[direction];
}

void Room::setSite(const Direction& direction, MapSite* mapSite) {
	p_sites[direction] = mapSite;
}

void Room::enter() {
	logMessage("enter a room.");
}
void Room::printInfo() {
	logMessage("I am a room.");
}

Room* Room::clone() {
	return new Room(*this);
}

void Room::initialize(int roomId) {
	p_roomId = roomId;
}