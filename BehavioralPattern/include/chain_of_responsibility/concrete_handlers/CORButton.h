#pragma once
#include "CORWidget.h"
class CORButton : public CORWidget {
public:
	//the successor is a COR Widget component
	CORButton(CORWidget*, Topic = NO_HELP_TOPIC);

	virtual void handleHelp();
};