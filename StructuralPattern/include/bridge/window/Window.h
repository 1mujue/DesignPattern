#pragma once
#include "bridge/window_impl/WindowImpl.h"

class Window {
private:
	WindowImpl* m_impl;
public:
	Window(WindowImpl*);

	//handled by windowimpl
	virtual void setOrigin();
	virtual void setExtent();
	virtual void drawRect();
	virtual void drawText();
protected:
	WindowImpl* getWindowImpl();
};