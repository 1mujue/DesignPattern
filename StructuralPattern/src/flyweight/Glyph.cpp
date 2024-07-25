#include "flyweight/Glyph.h"

Glyph::~Glyph() { ; }

void Glyph::draw(Window*, GlyphContext&) { ; }

void Glyph::setFont(Font*, GlyphContext&) { ; }
Font* Glyph::getFont(GlyphContext&) {
	return nullptr;
}
void Glyph::first(GlyphContext&) { ; }
void Glyph::next(GlyphContext&) { ; }
bool Glyph::isDone(GlyphContext&) {
	return false;
}
Glyph* Glyph::getCurrentGlyph(GlyphContext&) {
	return nullptr;	
}

void Glyph::insert(Glyph*, GlyphContext&) { ; }
void Glyph::remove(GlyphContext&) { ; }