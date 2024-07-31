#pragma once
#include "flyweight/flyweights/Glyph.h"

class Column : public Glyph{
public:
	Column();
	virtual ~Column();

	virtual void draw(GlyphContext&);
};