#pragma once
#include "Room.h"

class NormalRoom : public Room {
public:
	NormalRoom(int);

	virtual void enter();
	virtual void printInfo();

	virtual Room* clone();
};