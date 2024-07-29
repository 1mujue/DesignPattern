#pragma once
#include "MWidget.h"
#include "list"

class ListBox : public MWidget {
public:
	ListBox(DialogDirector*);

	virtual const char* getSelection();
	virtual void setList(std::list<char*>*);
	virtual void handleMouse(MouseEvent&);
};