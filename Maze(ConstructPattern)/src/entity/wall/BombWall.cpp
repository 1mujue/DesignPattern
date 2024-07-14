#include "wall/BombWall.h"

BombWall::BombWall(int damage)
	: Wall(), Bomb(damage) {
	message = "please enter damage of a bomb wall";
}

void BombWall::enter() {
	logMessage("enter a bomb wall.");
}

void BombWall::printInfo() {
	logMessage("I am a bomb wall.");
}