#include "chain_of_responsbility/Dialog.h"

Dialog::Dialog(HelpHandler* helpHandler, Topic topic)
	: Widget(0) {
	setHandler(helpHandler, topic);
}

void Dialog::handleHelp() {
	if (hasHelp()) {
		//do something...
	}
	else {
		HelpHandler::handleHelp();
	}
}