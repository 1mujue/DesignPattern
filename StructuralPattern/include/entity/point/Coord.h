#pragma once
#include "tool/SingleValue.h"

class Coord : public SingleValue<double>{
public:
	Coord(double);
	Coord();

	Coord operator+(const Coord&);
	bool operator==(const Coord&);
};