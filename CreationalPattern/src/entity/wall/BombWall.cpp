#include "entity/wall/BombWall.h"

BombWall::BombWall(int damage)
	: Wall(), Bomb(damage) {
	;
}

BombWall::BombWall(const BombWall& other) 
	: Wall(), Bomb(other.p_damage) {
	;
}

void BombWall::enter() {
	logMessage("enter a bomb wall.");
}

void BombWall::printInfo() {
	logMessage("I am a bomb wall.");
}

Wall* BombWall::clone() {
	return new BombWall(*this);
}