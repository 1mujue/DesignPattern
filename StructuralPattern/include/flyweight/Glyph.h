#pragma once
#include "flyweight/entity/Window.h"
#include "flyweight/entity/Font.h"
#include "GlyphContext.h"

class Glyph {
public:
	virtual ~Glyph();

	virtual void draw(Window*, GlyphContext&);

	virtual void setFont(Font*, GlyphContext&);
	virtual Font* getFont(GlyphContext&);
	virtual void first(GlyphContext&);
	virtual void next(GlyphContext&);
	virtual bool isDone(GlyphContext&);
	virtual Glyph* getCurrentGlyph(GlyphContext&);

	virtual void insert(Glyph*, GlyphContext&);
	virtual void remove(GlyphContext&);
};