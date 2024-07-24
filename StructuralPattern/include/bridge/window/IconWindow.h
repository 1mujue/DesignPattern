#pragma once
#include "Window.h"

class IconWindow : public Window {
private:
	const char* m_bitmapName;
public:
	IconWindow();

	//handled by window
	virtual void drawContents();

	virtual void open();
	virtual void close();
	virtual void iconify();
	virtual void deiconify();

	//handled by windowimpl
	virtual void setOrigin(const Point&);
	virtual void setExtent(const Point&);
	virtual void raise();
	virtual void lower();

	virtual void drawLine(const Point&, const Point&);
	virtual void drawRect(const Point&, const Point&);
	virtual void drawPolygon(const Point*, int);
	virtual void drawText(const char*, const Point&);
};