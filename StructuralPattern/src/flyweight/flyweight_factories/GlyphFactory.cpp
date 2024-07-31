#include "flyweight/flyweight_factories/GlyphFactory.h"

GlyphFactory::GlyphFactory() { 
	for (int i = 0; i < NCHARCODES; ++i) {
		m_characters[i] = 0;
	}
}

GlyphFactory::~GlyphFactory() { ; }
Character* GlyphFactory::createCharacter(char ch) {
	if (m_characters[ch] == 0) {
		m_characters[ch] = new Character(ch);
	}
	return m_characters[ch];
}
Row* GlyphFactory::CreateRow() {
	return new Row();
}
Column* GlyphFactory::createColumn() {
	return new Column();
}