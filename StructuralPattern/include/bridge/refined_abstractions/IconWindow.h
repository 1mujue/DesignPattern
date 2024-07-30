#pragma once
#include "bridge/abstractions/Window.h"

class IconWindow : public Window {
public:
	IconWindow(WindowImpl*);

	//handled by windowimpl
	virtual void setOrigin();
	virtual void setExtent();
	virtual void drawRect();
	virtual void drawText();

	void icon();
};