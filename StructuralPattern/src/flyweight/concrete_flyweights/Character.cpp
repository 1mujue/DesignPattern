#include "flyweight/concrete_flyweights/Character.h"

Character::Character(char ch)
	:m_char(ch) {
	;
}
Character::~Character() { ; }

void Character::draw(GlyphContext& context) {
	Font* font = context.getFont();
	logMessage("get the font, start to draw a character...");
}