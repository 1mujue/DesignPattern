#include "entity/door/EnchantedDoor.h"

EnchantedDoor::EnchantedDoor(Room* r1, Room* r2, int magic)
	:Door(r1, r2), Enchanted(magic) {
	p_message = "please enter magic of an enchanted door:";
	;
}

EnchantedDoor::EnchantedDoor(const EnchantedDoor& other)
	: Door(other.p_room1, other.p_room2), Enchanted(other.p_magic) {
	;
}

void EnchantedDoor::enter() {
	logMessage("enter an enchanted door.");
}

void EnchantedDoor::printInfo() {
	logMessage("I am an enchanted door.");
}

Door* EnchantedDoor::clone() {
	return nullptr;
}