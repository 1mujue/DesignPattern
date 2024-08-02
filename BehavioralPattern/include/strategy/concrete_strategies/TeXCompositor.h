#pragma once
#include "strategy/strategies/Compositor.h"

class TeXCompositor : public Compositor {
public:
	TeXCompositor();

	virtual void compose();
};