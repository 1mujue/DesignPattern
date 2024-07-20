#include "room/BombRoom.h"

BombRoom::BombRoom(int id, int damage)
	: Room(id), Bomb(damage) {
	message = "please enter damage of a bomb room.";
}

void BombRoom::enter() {
	logMessage("enter a bomb room.");
}

void BombRoom::printInfo() {
	logMessage("I am a bomb room.");
}

Room* BombRoom::clone() {
	return nullptr;
}