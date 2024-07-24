#pragma once
#include "Widget.h"

class Dialog : public Widget {
public:
	Dialog(HelpHandler*, Topic = NO_HELP_TOPIC);
	
	virtual void handleHelp();
};