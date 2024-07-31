#pragma once
#include "chain_of_responsibility/handlers/HelpHandler.h"

class CORWidget :public HelpHandler {
private:
	CORWidget* m_parent;
protected:
	//the successor is a COR Widget component
	CORWidget(CORWidget*, Topic = NO_HELP_TOPIC);
};