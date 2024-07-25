#include "command/MacroCommand.h"
#include <iterator>

MacroCommand::MacroCommand() { ; }
MacroCommand::~MacroCommand() { ; }

void MacroCommand::add(Command* command) {
	m_commands.push_back(command);
}
void MacroCommand::remove(Command* command) {
	m_commands.remove(command);
}

void MacroCommand::execute() {
	for (auto it = m_commands.begin(); it != m_commands.end(); ++it) {
		(*it)->execute();
	}
}