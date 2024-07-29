#pragma once
#include "Compositor.h"

class SimpleCompositor :public Compositor {
public:
	SimpleCompositor();

	virtual int compose(Coord*, Coord*, Coord*, int, int, int*);
};