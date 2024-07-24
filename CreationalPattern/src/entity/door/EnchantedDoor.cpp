#include "entity/door/EnchantedDoor.h"

EnchantedDoor::EnchantedDoor(Room* r1, Room* r2, int magic)
	:Door(r1, r2), Enchanted(magic) {
	message = "please enter magic of an enchanted door:";
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