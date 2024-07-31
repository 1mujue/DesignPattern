#include "flyweight/clients/GlyphContext.h"
#include "tool/log.h"

GlyphContext::GlyphContext() 
	: m_index(0), m_trees(new BTree()) {
	;
}
GlyphContext::~GlyphContext() { ; }

void GlyphContext::next(int) { ; }
void GlyphContext::insert(int) { ; }

Font* GlyphContext::getFont() {
	return nullptr;
}
void GlyphContext::setFont(Font* font, int span) { 
	m_trees->setFont(font, m_index, span);
}