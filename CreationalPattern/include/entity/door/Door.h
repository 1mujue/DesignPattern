#pragma once
#include "entity/room/Room.h"
#include "entity/type/MapSite.h"

class Door : public MapSite {
protected:
	Room* p_room1;
	Room* p_room2;
	bool p_isOpen;
public:
	Door(const Room* = 0, const Room* = 0);
	Door(const Door&);
	
	const Room* otherSideFrom(const Room*);

	virtual void enter();
	virtual void printInfo();

	virtual Door* clone();
	void initialize(Room*, Room*);
};