#pragma once
#include "Room.h"
#include "type/Enchanted.h"

class EnchantedRoom : public Room, public Enchanted {
public:
	EnchantedRoom(int, int = 0);

	virtual void enter();
	virtual void printInfo();
};