#include "entity/point/Coord.h"

Coord::Coord(double value)
	:SingleValue(value) {
	;
}
Coord::Coord() { ; }

Coord Coord::operator+(const Coord& other) {
	Coord ret;
	ret.setValue(this->value + other.value);
	return ret;
}