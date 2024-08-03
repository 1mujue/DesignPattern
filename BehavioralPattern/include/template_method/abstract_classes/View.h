#pragma once
#include "tool/log.h"

class View {
public:
	View();
	~View();

	//template method.
	void display();

protected:
	//hook operations. They have default implementations in
	//based classes, but derived class can override it.
	virtual void setFocus();
	virtual void doDisplay();
	virtual void resetFocus();

	//the method derived class must implement.
	virtual void showDerived() = 0;
private:
	//the method called only in based class.
	void showBased();
};