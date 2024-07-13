#pragma once
#include "MapSite.h"

class Room;
class Door : public MapSite {
protected:
	Room* m_room1;
	Room* m_room2;
	bool m_isOpen;
public:
	Door(Room* = 0, Room* = 0);
	
	const Room* otherSideFrom(const Room*);

	virtual void Enter();
	virtual void printInfo() {
		logMessage("I am a door.");
	}
};