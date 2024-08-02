#pragma once
#include "mediator/colleagues/MWidget.h"
#include "list"

class ListBox : public MWidget {
public:
	ListBox(DialogDirector*);

	virtual const char* getSelection();
	virtual void setList(std::list<char*>*);
	virtual void handleMouse();
private:
	std::list<char*>* m_list;
};