#pragma once
#include "entity/shape/Shape.h"

class Manipulator {
protected:
	Shape* p_shape;
public:
	Manipulator(Shape*);
};