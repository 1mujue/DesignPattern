#pragma once
#include "entity/type/MapSite.h"

class Wall : public MapSite {
public:
	Wall();
	Wall(const Wall&);

	virtual void enter();
	virtual void printInfo();

	virtual Wall* clone();
};