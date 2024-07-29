#pragma once

class WindowImpl {
public:
	virtual void setOriginImpl();
	virtual void setExtentImpl();
	virtual void drawRectImpl();
	virtual void drawTextImpl();
};