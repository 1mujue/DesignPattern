#pragma once
#include "type/MapSite.h"

class Wall : public MapSite {
public:
	Wall();

	virtual void enter();
	virtual void printInfo();

	virtual Wall* clone();
};