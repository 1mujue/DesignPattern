#pragma once
#include "strategy/strategies/Compositor.h"

class ArrayCompositor :public Compositor {
public:
	ArrayCompositor();

	virtual void compose();
};