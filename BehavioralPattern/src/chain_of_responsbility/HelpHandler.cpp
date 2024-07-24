#include "chain_of_responsbility/HelpHandler.h"

HelpHandler::HelpHandler(HelpHandler* helpHandler, Topic topic) 
	:m_successor(helpHandler), m_topic(topic) {
	;
}

bool HelpHandler::hasHelp() {
	return m_topic != NO_HELP_TOPIC;
}
void HelpHandler::setHandler(HelpHandler* helpHandler, Topic topic) {
	m_successor = helpHandler;
	m_topic = topic;
}
void HelpHandler::handleHelp() {
	if (m_successor != nullptr) {
		m_successor->handleHelp();
	}
}