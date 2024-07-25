#pragma once
#include "entity/Shape_Manipulator.h"

class Manipulator {
protected:
	Shape* p_shape;
public:
	Manipulator(Shape*);
};