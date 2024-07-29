#include "template_method/DerivedView.h"
#include "tool/log.h"

void DerivedView::setFocus() {
	logMessage("set focus in derived view...");
}
void DerivedView::doDisplay() {
	logMessage("do display in derived view...");
}
void DerivedView::resetFocus() {
	logMessage("reset focus in derived view...");
}