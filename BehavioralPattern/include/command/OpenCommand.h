#pragma once
#include "Command.h"
#include "entity/Application.h"

class OpenCommand : public Command {
private:
	Application* m_application;
	char* m_response;
public:
	OpenCommand(Application*);

	virtual void execute();
protected:
	virtual const char* askUser();
};