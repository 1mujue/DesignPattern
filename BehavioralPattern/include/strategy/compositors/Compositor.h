#pragma once
#include "connection/CCC.h"
#include "entity/Coord.h"

class Compositor {
public:
	virtual int compose(Coord*, Coord*, Coord*, int, int, int*) = 0;
protected:
	Compositor();
};