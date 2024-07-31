#include "flyweight/flyweights/Glyph.h"

Glyph::Glyph() { ; }
Glyph::~Glyph() { ; }

void Glyph::draw(GlyphContext& context) { 
	logMessage("draw glyph...");
}
void Glyph::setFont(Font* font, GlyphContext& context) {
	context.setFont(font);
}
Font* Glyph::getFont(GlyphContext&) {
	return nullptr;
}
Glyph* Glyph::getCurrentGlyph(GlyphContext&) {
	return nullptr;	
}
