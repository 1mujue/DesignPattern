#pragma once
#include "adapter/targets/Shape.h"
#include "adapter/adaptees/TextView.h"

/*
* Why does it extend TextView privately? Well, TextView is 
* a kind of TOOL, we extend because we want to use it but we can't 
* use it directly, and that's is why we need an Adapter!
*/
class TextShapeClass : public Shape, private TextView {
public:
	TextShapeClass(const char*);

	virtual void boundingBox() const;
	virtual Manipulator* createManipulator() const;
	virtual bool isEmpty() const;
};