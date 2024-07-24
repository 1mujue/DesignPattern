#pragma once
#include "Glyph.h"
#include "GlyphContext.h"

class Character : public Glyph {
private:
	char m_char;
public:
	Character(char);
	
	virtual void draw(Window*, GlyphContext&);
};
