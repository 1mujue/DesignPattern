#pragma once
#include "./room/Room.h"
#include <vector>

class Maze {
private:
	std::vector<Room> m_rooms;
	const char* m_type;
public:
	Maze();
	Maze(const char*);

	void addRoom(const Room*);
	Room* getRoomById(int) const;
	const char* getType();
};