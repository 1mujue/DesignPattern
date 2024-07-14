#include "room/NormalRoom.h"

NormalRoom::NormalRoom(int roomId)
	: Room(roomId) {
	;
}

void NormalRoom::enter() {
	logMessage("enter a normal room.");
}
void NormalRoom::printInfo() {
	logMessage("I am a normal room.");
}