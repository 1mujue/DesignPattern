#include "adapter/adapters/TextShapeClass.h"
#include "entity/manipulators/TextManipulator.h"

TextShapeClass::TextShapeClass(const char* content) 
	:TextView(content) {
	;
}

void TextShapeClass::boundingBox() const {
	getOrigin();
	getExtent();
}
Manipulator* TextShapeClass::createManipulator() const {
	return new TextManipulator(const_cast<TextShapeClass*>(this));
}
bool TextShapeClass::isEmpty() const {
	return TextView::isEmpty();
}