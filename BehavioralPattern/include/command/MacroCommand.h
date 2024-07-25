#pragma once
#include "Command.h"
#include <list>

class MacroCommand : public Command {
private:
	std::list<Command*> m_commands;
public:
	MacroCommand();
	virtual ~MacroCommand();

	virtual void add(Command*);
	virtual void remove(Command*);
	
	virtual void execute();
};