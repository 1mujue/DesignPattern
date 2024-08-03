#include "template_method/concrete _classes/DerivedView.h"
#include "tool/log.h"

DerivedView::DerivedView() { ; }
DerivedView::~DerivedView() { ; }

void DerivedView::setFocus() {
	logMessage("set focus in derived view...");
}
void DerivedView::doDisplay() {
	logMessage("do display in derived view...");
}
void DerivedView::resetFocus() {
	logMessage("reset focus in derived view...");
}
void DerivedView::showDerived() {
	logMessage("show derived class in derived view...");
}