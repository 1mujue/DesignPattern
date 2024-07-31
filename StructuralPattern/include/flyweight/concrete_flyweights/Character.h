#pragma once
#include "flyweight/flyweights/Glyph.h"
#include "flyweight/clients/GlyphContext.h"

class Character : public Glyph {
private:
	char m_char;
public:
	Character(char);
	virtual ~Character();
	
	virtual void draw(GlyphContext&);
};
