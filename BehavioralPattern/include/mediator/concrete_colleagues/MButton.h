#pragma once
#include "mediator/colleagues/MWidget.h"

class MButton : public MWidget {
public:
	MButton(DialogDirector*);

	virtual void setText(const char*);
	virtual const char* getText();
	virtual void handleMouse();
private:
	const char* m_content;
};