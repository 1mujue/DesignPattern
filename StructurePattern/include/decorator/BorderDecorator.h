#pragma once
#include "Decorator.h"

class BorderDecorator : public Decorator {
private:
	int m_width;
public:
	BorderDecorator(VisualComponent*, int);

	virtual void draw();
private:
	void drawBorder(int);
};