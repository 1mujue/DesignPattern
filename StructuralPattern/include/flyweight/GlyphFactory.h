#pragma once
#include "entity/text/Character.h"
#include "entity/text/Row.h"
#include "entity/text/Column.h"

class GlyphFactory {
private:
	static const int NCHARCODES = 128;
	Character* m_characters[NCHARCODES];
public:
	GlyphFactory();

	virtual ~GlyphFactory();
	virtual Character* createCharacter(char);
	virtual Row* CreateRow();
	virtual Column* createColumn();
};