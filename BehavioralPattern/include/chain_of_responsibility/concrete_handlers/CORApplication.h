#pragma once
#include "chain_of_responsibility/handlers/HelpHandler.h"

class CORApplication : public HelpHandler {
public:
	CORApplication(HelpHandler*, Topic = NO_HELP_TOPIC);

	virtual void handleHelp();
};