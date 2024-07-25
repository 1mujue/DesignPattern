#include "entity/point/Point.h"

const Point Point::zero;

Point::Point(Coord bottomLeft, Coord topRight)
	: x(bottomLeft), y(topRight) {
	;
}

Coord& Point::getX() {
	return x;
}
Coord& Point::getY() {
	return y;
}
void Point::setX(const Coord& tx) {
	x = tx;
}
void Point::setY(const Coord& ty) {
	y = ty;
}

void Point::draw() const {
	;
}

bool Point::operator==(const Point& other) {
	return this->x == other.x;
}