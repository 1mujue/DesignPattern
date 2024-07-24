#include "entity/room/EnchantedRoom.h"

EnchantedRoom::EnchantedRoom(int id, int magic)
	: Room(id), Enchanted(magic) {
	;
}

EnchantedRoom::EnchantedRoom(const EnchantedRoom& other)
	: Room(other.p_roomId), Enchanted(other.p_magic) {
	;
}

void EnchantedRoom::enter() {
	logMessage("enter an enchanted room.");
}

void EnchantedRoom::printInfo() {
	logMessage("I am an enchanted room.");
}

Room* EnchantedRoom::clone() {
	return nullptr;
}