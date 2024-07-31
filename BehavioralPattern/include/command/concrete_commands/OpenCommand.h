#pragma once
#include "command/commands/Command.h"
#include "command/clients/CApplication.h"

class OpenCommand : public Command {
public:
	OpenCommand(CApplication*);

	virtual void execute();

private:
	CApplication* m_application;
	char* m_response;
};