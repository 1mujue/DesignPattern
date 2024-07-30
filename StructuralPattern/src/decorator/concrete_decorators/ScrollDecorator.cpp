#include "decorator/concrete_decorators/ScrollDecorator.h"
#include "tool/log.h"

ScrollDecorator::ScrollDecorator(VisualComponent* component)
	:Decorator(component) {
	;
}

ScrollDecorator::~ScrollDecorator() { ; }

void ScrollDecorator::draw() {
	scroll();
	Decorator::draw();
}
void ScrollDecorator::resize() {
	scroll();
	Decorator::draw();
}

void ScrollDecorator::scroll() {
	logMessage("in scroll...");
}