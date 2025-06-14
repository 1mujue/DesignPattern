#pragma once
#include "Room.h"
#include "entity/type/Enchanted.h"

class EnchantedRoom : public Room, public Enchanted {
public:
	EnchantedRoom(int, int = 0);
	EnchantedRoom(const EnchantedRoom&);

	virtual void enter();
	virtual void printInfo();

	virtual Room* clone();
};