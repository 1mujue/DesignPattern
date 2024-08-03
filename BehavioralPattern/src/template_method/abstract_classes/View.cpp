#include "template_method/abstract_classes/View.h"

View::View() { ; }
View::~View() { ; }

void View::display() {
	setFocus();
	doDisplay();
	resetFocus();

	showBased();
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

void View::showBased() {
	logMessage("show based in view...");
}