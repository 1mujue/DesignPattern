#pragma once
#include "decorator/components/VisualComponent.h"

class ConcreteVisualComponent : public VisualComponent {
public:
	ConcreteVisualComponent();

	virtual void draw();
	virtual void resize();
};