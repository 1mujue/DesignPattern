#include "chain_of_responsibility/concrete_handlers/Button.h"

Button::Button(CORWidget* widget, Topic topic) 
	:CORWidget(widget, topic) {
	;
}
void Button::handleHelp() {
	if (hasHelp()) {
		logMessage("handle request in button...");
	}
	else {
		HelpHandler::handleHelp();
	}
}