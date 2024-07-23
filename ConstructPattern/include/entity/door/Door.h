#pragma once
#include "type/MapSite.h"

class Room;
class Door : public MapSite {
protected:
	Room* m_room1;
	Room* m_room2;
	bool m_isOpen;
public:
	Door(const Room* = 0, const Room* = 0);
	
	const Room* otherSideFrom(const Room*);

	virtual void enter();
	virtual void printInfo();

	virtual Door* clone();
};