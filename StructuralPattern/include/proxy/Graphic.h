#pragma once
#include <iostream>
#include "entity/point/Point.h"
#include "entity/Event.h"

class Graphic {
public:
	virtual ~Graphic();

	virtual void draw(const Point&) = 0;
	virtual void handleMouse(Event&) = 0;

	virtual const Point& getExtent() = 0;

	virtual void load(std::istream&) = 0;
	virtual void save(std::ostream&) = 0;
protected:
	Graphic();
};