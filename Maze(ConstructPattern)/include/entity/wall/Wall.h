#pragma once
#include "MapSite.h"

class Wall : public MapSite {
public:
	Wall();

	virtual void Enter();
	virtual void printInfo() {
		logMessage("I am a wall.");
	}
};