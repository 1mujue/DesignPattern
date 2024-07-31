#include "flyweight/unshared_concrete_flyweights/Column.h"

Column::Column() { ; }
Column::~Column() { ; }

void Column::draw(GlyphContext& context) {
	Font* font = context.getFont();
	logMessage("get the font, start to draw a column...");
}