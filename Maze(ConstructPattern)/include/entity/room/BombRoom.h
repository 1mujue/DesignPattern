#pragma once
#include "Room.h"

class BombRoom : public Room {
private:
	int m_damage;
	bool m_isBombed;
public:
	BombRoom(int, int = 0);

	virtual void Enter();
	virtual void printInfo() {
		logMessage("I am a bomb room.");
	}
};