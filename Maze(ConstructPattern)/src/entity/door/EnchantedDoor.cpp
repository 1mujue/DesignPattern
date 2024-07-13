#include "door/EnchantedDoor.h"

EnchantedDoor::EnchantedDoor(Room* r1, Room* r2, int magic)
	:Door(r1, r2), m_magic(magic), m_isMagic(false) {
	;
}

void EnchantedDoor::Enter() {
	logMessage("enter an enchanted door.");
}