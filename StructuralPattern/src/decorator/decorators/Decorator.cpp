#include "decorator/decorators/Decorator.h"

Decorator::Decorator(VisualComponent* component)
	:m_visualComponent(component) {
	;
}
Decorator::~Decorator() { ; }

void Decorator::draw() { 
	m_visualComponent->draw();
}
void Decorator::resize() { 
	m_visualComponent->resize();
}