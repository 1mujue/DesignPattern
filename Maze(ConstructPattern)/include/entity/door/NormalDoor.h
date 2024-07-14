#pragma once
#include "Door.h"

class NormalDoor : public Door {
public:
	NormalDoor(const Room* r1, const Room *r2);

	virtual void enter();
	virtual void printInfo();
};