#include "room/BombRoom.h"

BombRoom::BombRoom(int id, int damage)
	: Room(id), m_damage(damage), m_isBombed(false){
}

void BombRoom::Enter() {
	logMessage("enter a bomb room.");
}