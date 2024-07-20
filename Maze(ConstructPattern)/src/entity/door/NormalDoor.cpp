#include "door/NormalDoor.h"

NormalDoor::NormalDoor(const Room* r1, const Room* r2) 
	: Door(r1, r2) {
	;
}

void NormalDoor::enter() {
	logMessage("enter a normal door.");
}
void NormalDoor::printInfo() {
	logMessage("I am a normal door.");
}

Door* NormalDoor::clone() {
	return nullptr;
}