#pragma once
#include "connection/DW.h"
#include "tool/log.h"

class MWidget {
public:
	MWidget(DialogDirector*);
	virtual void changed();

	virtual void handleMouse();
private:
	DialogDirector* m_director;
};