#include "chain_of_responsibility/concrete_handlers/Dialog.h"

Dialog::Dialog(HelpHandler* helpHandler, Topic topic)
	: CORWidget(0) {
	setHandler(helpHandler, topic);
}

void Dialog::handleHelp() {
	if (hasHelp()) {
		logMessage("handle request in dialog...");
	}
	else {
		HelpHandler::handleHelp();
	}
}