#pragma once
#include "adapter/targets/Shape.h"
#include "adapter/adaptees/TextView.h"

class TextShapeObject : public Shape {
private:
	TextView* m_textView;
public:
	TextShapeObject(TextView*);

	virtual void boundingBox() const;
	virtual Manipulator* createManipulator() const;
	virtual bool isEmpty() const;

	
};