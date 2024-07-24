#include "entity/type/Enchanted.h"

Enchanted::Enchanted(int magic) {
	p_magic = magic;
	p_isMagic = true;
	p_message = "please enter magic of an enchanted class:";
}

void Enchanted::setMagic(int magic) {
	p_magic = magic;
}
int Enchanted::getMagic() {
	return p_magic;
}