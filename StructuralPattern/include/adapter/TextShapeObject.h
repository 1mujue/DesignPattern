#pragma once
#include "entity/shape/Shape.h"
#include "entity/view/TextView.h"

//TextView has some methods that have been implemented,
//whileas Shape doesn't have.
class TextShapeObject : public Shape {
private:
	TextView* m_textView;
public:
	TextShapeObject(TextView*);

	virtual void boundingBox(Point&, Point&) const;
	virtual Manipulator* createManipulator() const;
	virtual bool isEmpty() const;
};