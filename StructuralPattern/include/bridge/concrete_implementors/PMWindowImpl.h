#pragma once
#include "bridge/implementors/WindowImpl.h"

class PMWindowImpl : public WindowImpl {
public:
	virtual void setOriginImpl();
	virtual void setExtentImpl();
	virtual void drawRectImpl();
	virtual void drawTextImpl();

	void PMWindow();
};