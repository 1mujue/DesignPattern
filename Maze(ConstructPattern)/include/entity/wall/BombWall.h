#pragma once
#include "Wall.h"

class BombWall : public Wall {
private:
	int m_damage;
	bool m_isBombed;
public:
	BombWall(int = 0);

	virtual void Enter();
	virtual void printInfo() {
		logMessage("I am a bomb wall.");
	}
};