#pragma once
#include "connection/DW.h"
#include "entity/event/MouseEvent.h"

class MWidget {
public:
	MWidget(DialogDirector*);
	virtual void changed();

	virtual void handleMouse(MouseEvent&);
private:
	DialogDirector* m_director;
};