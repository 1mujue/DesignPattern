#pragma once
#include "Room.h"
#include "entity/type/Bomb.h"

class BombRoom : public Room,public Bomb {
public:
	BombRoom(int, int = 0);
	BombRoom(const BombRoom&);

	virtual void enter();
	virtual void printInfo();

	virtual Room* clone();
};