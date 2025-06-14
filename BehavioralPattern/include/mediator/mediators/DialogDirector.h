#pragma once
#include "connection/DW.h"
#include "tool/log.h"

class DialogDirector {
public:
	virtual ~DialogDirector();

	virtual void showDialog();
	virtual void widgeChanged(MWidget*) = 0;

protected:
	DialogDirector();
	virtual void createWidgets() = 0;
};