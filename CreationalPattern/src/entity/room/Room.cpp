#include "entity/room/Room.h"

Room::Room(int id)
	:m_roomId(id) {
	for (int i = 0; i < 4; ++i) {
		m_sites[i] = nullptr;
	}
}

const int Room::getRoomId() const {
	return this->m_roomId;
}

const MapSite* Room::getSite(const Direction& direction) {
	return m_sites[direction];
}

void Room::setSite(const Direction& direction, MapSite* mapSite) {
	m_sites[direction] = mapSite;
}

void Room::enter() {
	logMessage("enter a room.");
}
void Room::printInfo() {
	logMessage("I am a room.");
}

Room* Room::clone() {
	return nullptr;
}