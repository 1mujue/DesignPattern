#pragma once
#include "VisualComponent.h"

class Component : public VisualComponent {
public:
	Component();

	virtual void draw();
	virtual void resize();
};