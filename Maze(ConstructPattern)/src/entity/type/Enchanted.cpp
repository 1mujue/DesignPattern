#include "entity/type/Enchanted.h"

Enchanted::Enchanted(int magic) {
	m_magic = magic;
	m_isMagic = true;
	message = "please enter magic of an enchanted class:";
}

void Enchanted::setMagic(int magic) {
	m_magic = magic;
}
int Enchanted::getMagic() {
	return m_magic;
}