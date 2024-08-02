#include "chain_of_responsibility/concrete_handlers/CORButton.h"

CORButton::CORButton(CORWidget* widget, Topic topic) 
	:CORWidget(widget, topic) {
	;
}
void CORButton::handleHelp() {
	if (hasHelp()) {
		logMessage("handle request in button...");
	}
	else {
		HelpHandler::handleHelp();
	}
}