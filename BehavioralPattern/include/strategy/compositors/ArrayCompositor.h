#pragma once
#include "Compositor.h"

class ArrayCompositor :public Compositor {
public:
	ArrayCompositor(int);

	virtual int compose(Coord*, Coord*, Coord*, int, int, int*);
};