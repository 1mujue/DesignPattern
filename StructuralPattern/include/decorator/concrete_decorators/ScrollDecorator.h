#pragma once
#include "decorator/decorators/Decorator.h"

class ScrollDecorator :public Decorator {
public:
	ScrollDecorator(VisualComponent*);
	~ScrollDecorator();

	virtual void draw();
	virtual void resize();

	void scroll();
};