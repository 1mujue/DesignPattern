#include "template_method/View.h"
#include "tool/log.h"

View::View() { ; }
View::~View() { ; }

void View::display() {
	setFocus();
	doDisplay();
	resetFocus();
}

void View::setFocus() {
	logMessage("set focus in view...");
}
void View::doDisplay() {
	logMessage("do display in view...");
}
void View::resetFocus() {
	logMessage("reset focus in view...");
}