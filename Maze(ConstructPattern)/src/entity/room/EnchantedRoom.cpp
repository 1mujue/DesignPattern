#include "room/EnchantedRoom.h"

EnchantedRoom::EnchantedRoom(int id, int magic)
	: Room(id), m_magic(magic), m_isMagic(false) {
	;
}

void EnchantedRoom::Enter() {
	logMessage("enter an enchanted door.");
}