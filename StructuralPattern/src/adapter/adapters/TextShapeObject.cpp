#include "adapter/adapters/TextShapeObject.h"
#include "adapter/manipulators/TextManipulator.h"

TextShapeObject::TextShapeObject(TextView* tv) 
	:m_textView(tv) {
	;
}

void TextShapeObject::boundingBox() const {
	m_textView->getOrigin();
	m_textView->getExtent();
}
Manipulator* TextShapeObject::createManipulator() const {
	return new TextManipulator(const_cast<TextShapeObject*>(this));
}
bool TextShapeObject::isEmpty() const {
	return m_textView->isEmpty();
}