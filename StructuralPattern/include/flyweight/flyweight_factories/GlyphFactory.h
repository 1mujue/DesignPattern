#pragma once
#include "flyweight/concrete_flyweights/Character.h"
#include "flyweight/unshared_concrete_flyweights/Row.h"
#include "flyweight/unshared_concrete_flyweights/Column.h"

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