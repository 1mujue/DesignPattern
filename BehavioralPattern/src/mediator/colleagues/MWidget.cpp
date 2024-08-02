#include "mediator/colleagues/MWidget.h"
#include "mediator/mediators/DialogDirector.h"

MWidget::MWidget(DialogDirector* dd)
	: m_director(dd) {
	;
}

//you can take this as an EVENT.
void MWidget::changed() {
	logMessage("MWidget changed...");
	m_director->widgeChanged(this);
}
void MWidget::handleMouse() {
	logMessage("handle mouse in MWidget...");
}