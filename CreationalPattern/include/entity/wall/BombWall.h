#pragma once
#include "Wall.h"
#include "entity/type/Bomb.h"

class BombWall : public Wall, public Bomb {
public:
	BombWall(int = 0);
	BombWall(const BombWall&);

	virtual void enter();
	virtual void printInfo();

	virtual Wall* clone();
};