#include "decorator/Decorator.h"

Decorator::Decorator(VisualComponent* visualComponent)
	:m_visualComponent(visualComponent) {
	;
}

void Decorator::draw() { ; }
void Decorator::resize() { ; }