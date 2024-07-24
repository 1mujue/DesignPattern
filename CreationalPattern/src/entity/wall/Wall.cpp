#include "entity/wall/Wall.h"

Wall::Wall() { ; }

Wall::Wall(const Wall& other) { ; }

void Wall::enter() {
	logMessage("enter a wall.");
}

void Wall::printInfo() {
	logMessage("I am a wall.");
}

Wall* Wall::clone() {
	return new Wall(*this);
}