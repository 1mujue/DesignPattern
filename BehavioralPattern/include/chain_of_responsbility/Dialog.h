#pragma once
#include "Widget.h"

class Dialog : public CORWidget {
public:
	Dialog(HelpHandler*, Topic = NO_HELP_TOPIC);
	
	virtual void handleHelp();
};