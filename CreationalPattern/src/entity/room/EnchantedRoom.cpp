#include "entity/room/EnchantedRoom.h"

EnchantedRoom::EnchantedRoom(int id, int magic)
	: Room(id), Enchanted(magic) {
	message = "please enter damage of an enchanted room:";
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