#pragma once
#include "entity/point/Coord.h"
class Point {
public:
	static const Point zero;
private:
	Coord x, y;
public:
	Point(Coord = 0, Coord = 0);

	Coord& getX();
	Coord& getY();
	void setX(const Coord&);
	void setY(const Coord&);
	void draw() const;

	bool operator==(const Point&);
};

