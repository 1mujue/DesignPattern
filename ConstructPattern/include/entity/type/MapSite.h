#pragma once
#include "tool/Direction.h"
#include "tool/log.h"

//all object in maze.
class MapSite {
public:
	virtual void enter() = 0;
	virtual void printInfo() = 0;
};