#pragma once
#include "Wall.h"

class NormalWall : public Wall {
public:
	NormalWall();

	virtual void enter();
	virtual void printInfo();

	virtual Wall* clone();
};