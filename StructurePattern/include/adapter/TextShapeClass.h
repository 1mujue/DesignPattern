#pragma once
#include "entity/shape/Shape.h"
#include "entity/view/TextView.h"

//TextView has some methods that have been implemented,
//whileas Shape doesn't have.
class TextShapeClass : public Shape, private TextView {
public:
	TextShapeClass();

	virtual void boundingBox(Point&, Point&) const;
	virtual Manipulator* createManipulator() const;
	virtual bool isEmpty() const;
};