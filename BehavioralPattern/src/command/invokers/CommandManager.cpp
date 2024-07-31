#include "command/invokers/CommandManager.h"

CommandManager::CommandManager() { ; }
CommandManager::~CommandManager() { ; }

void CommandManager::add(Command* command) {
	m_commands.push_back(command);
}
void CommandManager::remove(Command* command) {
	m_commands.remove(command);
}

void CommandManager::execute() {
	logMessage("execute commands in command manager...");
	for (auto it = m_commands.begin(); it != m_commands.end(); ++it) {
		(*it)->execute();
	}
}