#include "command/OpenCommand.h"
#include "entity/Document.h"
#include <string>
#include <iostream>


OpenCommand::OpenCommand(Application* app) 
	:m_application(app), m_response(nullptr) {
	;
}

void OpenCommand::execute() {
	const char* name = askUser();

	if (name != 0) {
		Document* document = new Document(name);
		m_application->addDocument(document);
		document->open();
	}
}
const char* OpenCommand::askUser() {
	std::string message;
	std::cin >> message;
	size_t len = message.size();
	char* ch = new char[len];
	for (int i = 0; i < len; ++i) {
		ch[i] = message[i];
	}
	return ch;
}