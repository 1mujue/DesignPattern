#pragma once
#include "bridge/abstractions/Window.h"

class ApplicationWindow : public Window {
public:
	ApplicationWindow(WindowImpl*);

	//handled by windowimpl
	virtual void setOrigin();
	virtual void setExtent();
	virtual void drawRect();
	virtual void drawText();

	void application();
};