#pragma once
#include "Room.h"

class EnchantedRoom : public Room {
private:
	int m_magic;
	bool m_isMagic;
public:
	EnchantedRoom(int, int = 0);

	virtual void Enter();
	virtual void printInfo() {
		logMessage("I am an enchanted room.");
	}
};