#pragma once
#include "Door.h"
#include "type/Enchanted.h"

class EnchantedDoor : public Door, public Enchanted {
public:
	EnchantedDoor(Room* = 0, Room* = 0, int = 0);

	virtual void enter();
	virtual void printInfo();

	virtual Door* clone();
};