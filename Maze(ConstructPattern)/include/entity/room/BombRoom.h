#pragma once
#include "Room.h"
#include "type/Bomb.h"

class BombRoom : public Room,public Bomb {
public:
	BombRoom(int, int = 0);

	virtual void enter();
	virtual void printInfo();
};