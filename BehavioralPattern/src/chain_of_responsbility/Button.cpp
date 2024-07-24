#include "chain_of_responsbility/Button.h"

Button::Button(Widget* widget, Topic topic) 
	:Widget(widget, topic) {
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