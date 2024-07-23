#include "adapter/TextShapeObject.h"
#include "tool/manipulator/TextManipulator.h"

TextShapeObject::TextShapeObject(TextView* tv) 
	:m_textView(tv) {
	;
}

void TextShapeObject::boundingBox(Point& bottomLeft, Point& topRight) const {
	Coord bottom, left, width, height;

	m_textView->getOrigin(bottom, left);
	m_textView->getExtent(width, height);

	bottomLeft.setX(bottom);
	bottomLeft.setY(left);
	topRight.setX(bottom + height);
	topRight.setY(left + width);
}
Manipulator* TextShapeObject::createManipulator() const {
	return new TextManipulator(const_cast<TextShapeObject*>(this));
}
bool TextShapeObject::isEmpty() const {
	return m_textView->isEmpty();
}