#pragma once
#include "entity/shape/Shape.h"
#include "entity/view/TextView.h"

class TextShapeObject : public Shape {
private:
	TextView* m_textView;
public:
	TextShapeObject(TextView*);

	virtual void boundingBox(Point&, Point&) const;
	virtual Manipulator* createManipulator() const;
	virtual bool isEmpty() const;

	
};