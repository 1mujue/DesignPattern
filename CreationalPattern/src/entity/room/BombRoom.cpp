#include "entity/room/BombRoom.h"

BombRoom::BombRoom(int id, int damage)
	: Room(id), Bomb(damage) {
	;
}

BombRoom::BombRoom(const BombRoom& other)
	: Room(other.p_roomId), Bomb(other.p_damage) {
	;
}

void BombRoom::enter() {
	logMessage("enter a bomb room.");
}

void BombRoom::printInfo() {
	logMessage("I am a bomb room.");
}

Room* BombRoom::clone() {
	return new BombRoom(*this);
}