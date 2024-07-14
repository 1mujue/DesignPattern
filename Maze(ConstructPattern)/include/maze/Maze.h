#pragma once
#include "./room/Room.h"
#include <vector>

class Maze {
private:
	std::vector<Room> m_rooms;
public:
	Maze();

	void addRoom(const Room*);
	Room* getRoomById(int) const;
};