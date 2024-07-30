#include "decorator/concrete_decorators/BorderDecorator.h"
#include "tool/log.h"

BorderDecorator::BorderDecorator(VisualComponent* component)
	:Decorator(component) {
	;
}

BorderDecorator::~BorderDecorator() { ; }

void BorderDecorator::draw() { 
	border();
	Decorator::draw();
}

void BorderDecorator::resize() {
	border();
	Decorator::resize();
}

void BorderDecorator::border() {
	logMessage("in border...");
}