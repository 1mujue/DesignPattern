#pragma once
#include "entity/point/Point.h"
#include "tool/manipulator/Manipulator.h"

class Shape {
public:
	Shape();
	
	virtual void boundingBox(Point&, Point&) const;
	virtual Manipulator* createManipulator() const;
};