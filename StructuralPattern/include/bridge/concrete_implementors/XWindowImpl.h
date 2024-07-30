#pragma once
#include "bridge/implementors/WindowImpl.h"

class XWindowImpl :public WindowImpl {
public:
	virtual void setOriginImpl();
	virtual void setExtentImpl();
	virtual void drawRectImpl();
	virtual void drawTextImpl();

	void XWindow();
};