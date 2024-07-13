#pragma once
#include "Direction.h"
#include "log.h"

//all object in maze.
class MapSite {
public:
	virtual void Enter() = 0;
	virtual void printInfo() = 0;
};