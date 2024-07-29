#pragma once
#include "MWidget.h"

class Button : public MWidget {
public:
	Button(DialogDirector*);

	virtual void setText(const char*);
	virtual void handleMouse(MouseEvent&);
};