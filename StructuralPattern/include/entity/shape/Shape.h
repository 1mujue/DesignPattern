#pragma once
#include "entity/point/Point.h"
#include "entity/Shape_Manipulator.h"

class Shape {
public:
	Shape();
	
	virtual void boundingBox(Point&, Point&) const;
	virtual Manipulator* createManipulator() const;
};