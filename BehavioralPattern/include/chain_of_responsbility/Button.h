#pragma once
#include "Widget.h"
class Button : public CORWidget {
public:
	Button(CORWidget*, Topic = NO_HELP_TOPIC);

	virtual void handleHelp();
};