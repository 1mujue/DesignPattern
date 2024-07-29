#pragma once
#include "HelpHandler.h"
class CORWidget :public HelpHandler {
private:
	CORWidget* m_parent;
protected:
	CORWidget(CORWidget*, Topic = NO_HELP_TOPIC);
};