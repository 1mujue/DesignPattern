#include "adapter/TextShapeClass.h"
#include "tool/manipulator/TextManipulator.h"


TextShapeClass::TextShapeClass() {
	;
}

void TextShapeClass::boundingBox(Point& bottomLeft, Point& topRight) const {
	Coord bottom, left, width, height;

	getOrigin(bottom, left);
	getExtent(width, height);

	bottomLeft.setX(bottom);
	bottomLeft.setY(left);
	topRight.setX(bottom + height);
	topRight.setY(left + width);
}
Manipulator* TextShapeClass::createManipulator() const {
	return new TextManipulator(const_cast<TextShapeClass*>(this));
}
bool TextShapeClass::isEmpty() const {
	return TextView::isEmpty();
}