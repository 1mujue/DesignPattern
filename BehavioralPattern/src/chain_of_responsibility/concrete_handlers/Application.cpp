#include "chain_of_responsibility/concrete_handlers/CORApplication.h"

CORApplication::CORApplication(HelpHandler* handler, Topic topic)
	:HelpHandler(handler, topic) {
	;
}

void CORApplication::handleHelp() {
	logMessage("handle help in application...");
}