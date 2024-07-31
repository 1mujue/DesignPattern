#pragma once
#include "command/commands/Command.h"
#include <list>

class CommandManager {
public:
	CommandManager();
	virtual ~CommandManager();

	virtual void add(Command*);
	virtual void remove(Command*);

	virtual void execute();
private:
	std::list<Command*> m_commands;
};