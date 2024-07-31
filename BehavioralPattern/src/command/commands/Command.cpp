#include "command/commands/Command.h"

Command::~Command() { ; }

Command::Command() { ; }

void Command::execute() { 
	logMessage("execute a command...");
}