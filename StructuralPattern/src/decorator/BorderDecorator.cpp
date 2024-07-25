#include "decorator/BorderDecorator.h"

BorderDecorator::BorderDecorator(VisualComponent* visualComponent, int width)
	:Decorator(visualComponent), m_width(width) {
	;
}

void BorderDecorator::draw() { ; }

void BorderDecorator::drawBorder(int) { ; }