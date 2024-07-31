#pragma once
#include "flyweight/clients/GlyphContext.h"
#include "tool/log.h"

class Glyph {
public:
	virtual ~Glyph();

	virtual void draw(GlyphContext&);
	virtual Glyph* getCurrentGlyph(GlyphContext&);

	virtual void setFont(Font*, GlyphContext&);
	virtual Font* getFont(GlyphContext&);
protected:
	Glyph();
};