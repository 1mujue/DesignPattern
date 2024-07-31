#include "flyweight/unshared_concrete_flyweights/Row.h"

Row::Row() { ; }
Row::~Row() { ; }

void Row::draw(GlyphContext& context) {
	Font* font = context.getFont();
	logMessage("get the font, start to draw a row...");
}