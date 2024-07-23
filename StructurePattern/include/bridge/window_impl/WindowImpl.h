#pragma once
#include "entity/point/Coord.h"

class WindowImpl {
public:
	virtual void implTop() = 0;
	virtual void implBottom() = 0;
	virtual void implSetExtent() = 0;
	virtual void implSetOrigin() = 0;
	
	virtual void deviceRect(Coord, Coord, Coord, Coord) = 0;
	virtual void deviceText(const char*, Coord, Coord) = 0;
	virtual void deviceBitmap(const char*, Coord, Coord) = 0;
protected:
	WindowImpl();
};