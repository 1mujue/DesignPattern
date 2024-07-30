#pragma once
#include "decorator/components/VisualComponent.h"

class Decorator : public VisualComponent {
public:
	Decorator(VisualComponent*);

	virtual void draw();
	virtual void resize();
protected:
	virtual ~Decorator();
private:
	VisualComponent* m_visualComponent;
};