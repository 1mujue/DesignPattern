#pragma once
#include "Door.h"

class EnchantedDoor : public Door {
private:
	int m_magic;
	bool m_isMagic;
public:
	EnchantedDoor(Room* = 0, Room* = 0, int = 0);

	virtual void Enter();
	virtual void printInfo() {
		logMessage("I am an enchanted door.");
	}
};