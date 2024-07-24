#pragma once
#include "flyweight/entity/Character.h"
#include "flyweight/entity/Row.h"
#include "flyweight/entity/Column.h"

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