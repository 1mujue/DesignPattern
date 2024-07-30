#pragma once
#include "decorator/decorators/Decorator.h"

class BorderDecorator : public Decorator {
public:
	BorderDecorator(VisualComponent*);
	~BorderDecorator();

	virtual void draw();
	virtual void resize();

	void border();
};