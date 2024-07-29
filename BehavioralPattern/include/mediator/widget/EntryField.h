#pragma once
#include "MWidget.h"

class EntryField : public MWidget {
public:
	EntryField(DialogDirector*);

	virtual void setText(const char*);
	virtual const char& getText();
	virtual void handleMouse(MouseEvent&);
};