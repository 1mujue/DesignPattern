#pragma once
#include "strategy/strategies/Compositor.h"
class SimpleCompositor :public Compositor {
public:
	SimpleCompositor();

	virtual void compose();
};