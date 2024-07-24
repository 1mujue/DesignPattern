#include "entity/point/Point.h"

Point::Point(Coord bottomLeft, Coord topRight)
	: x(bottomLeft), y(topRight) {
	;
}
Point::Point() {
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