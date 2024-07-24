#pragma once
#include "VisualComponent.h"

class Decorator : public VisualComponent {
private:
	VisualComponent* m_visualComponent;
public:
	Decorator(VisualComponent*);

	virtual void draw();
	virtual void resize();
};