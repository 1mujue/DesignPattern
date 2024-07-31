#include "command/concrete_commands/OpenCommand.h"
#include <string>
#include <iostream>


OpenCommand::OpenCommand(CApplication* app) 
	:m_application(app), m_response(nullptr) {
	;
}

void OpenCommand::execute() {
	logMessage("execute an open command...");
	const char* name = "example.txt";

	if (name != 0) {
		Document* document = new Document(name);
		m_application->addDocument(document);
		document->open();
	}
}