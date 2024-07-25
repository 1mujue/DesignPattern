#include "flyweight/GlyphContext.h"

GlyphContext::GlyphContext() { ; }
GlyphContext::~GlyphContext() { ; }

void GlyphContext::next(int) { ; }
void GlyphContext::insert(int) { ; }

Font* GlyphContext::getFont() {
	return nullptr;
}
void GlyphContext::setFont(Font*, int) { ; }