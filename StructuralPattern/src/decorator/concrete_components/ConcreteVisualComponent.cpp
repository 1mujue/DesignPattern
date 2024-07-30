#include "decorator/concrete_components/ConcreteVisualComponent.h"
#include "tool/log.h"

ConcreteVisualComponent::ConcreteVisualComponent() { ; }

void ConcreteVisualComponent::draw() { 
	logMessage("start to draw...");
}
void ConcreteVisualComponent::resize() {
	logMessage("start to resize...");
}