#pragma once
#include "CORWidget.h"
class Button : public CORWidget {
public:
	//the successor is a COR Widget component
	Button(CORWidget*, Topic = NO_HELP_TOPIC);

	virtual void handleHelp();
};