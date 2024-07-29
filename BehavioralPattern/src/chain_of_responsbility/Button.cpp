#include "chain_of_responsbility/Button.h"

Button::Button(CORWidget* widget, Topic topic) 
	:CORWidget(widget, topic) {
	;
}
void Button::handleHelp() {
	if (hasHelp()) {
		//do something.
	}
	else {
		HelpHandler::handleHelp();
	}
}