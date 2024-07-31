#pragma once
#include "CORWidget.h"

class Dialog : public CORWidget {
public:
	//the successor can be ALL Help Handler component.
	Dialog(HelpHandler*, Topic = NO_HELP_TOPIC);
	
	virtual void handleHelp();
};