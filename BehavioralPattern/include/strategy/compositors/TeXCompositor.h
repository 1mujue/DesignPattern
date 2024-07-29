#pragma once
#include "Compositor.h"

class TeXCompositor : public Compositor {
public:
	TeXCompositor();

	virtual int compose(Coord*, Coord*, Coord*, int, int, int*);
};