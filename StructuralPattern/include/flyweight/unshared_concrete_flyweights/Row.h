#pragma once
#include "flyweight/flyweights/Glyph.h"

class Row : public Glyph{
public:
	Row();
	virtual ~Row();

	virtual void draw(GlyphContext&);
};