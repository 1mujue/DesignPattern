#pragma once
#include "entity/point/Coord.h"
class Point {
private:
	Coord x, y;
public:
	Point(Coord&, Coord&);
	Point();

	Coord& getX();
	Coord& getY();
	void setX(const Coord&);
	void setY(const Coord&);
};