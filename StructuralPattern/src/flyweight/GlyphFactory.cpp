#include "flyweight/GlyphFactory.h"

GlyphFactory::GlyphFactory() { ; }

GlyphFactory::~GlyphFactory() { ; }
Character* GlyphFactory::createCharacter(char) {
	return nullptr;
}
Row* GlyphFactory::CreateRow() {
	return nullptr;
}
Column* GlyphFactory::createColumn() {
	return nullptr;
}