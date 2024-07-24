#pragma once
#include "Widget.h"
class Button : public Widget {
public:
	Button(Widget*, Topic = NO_HELP_TOPIC);

	virtual void handleHelp();
};