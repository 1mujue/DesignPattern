#pragma once
#include "HelpHandler.h"
class Widget :public HelpHandler {
private:
	Widget* m_parent;
protected:
	Widget(Widget*, Topic = NO_HELP_TOPIC);
};