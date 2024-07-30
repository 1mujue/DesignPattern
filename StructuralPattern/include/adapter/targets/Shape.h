#pragma once
#include "connection/MS.h"

class Shape {
public:
	Shape();
	
	virtual void boundingBox() const;
	virtual Manipulator* createManipulator() const;
};