#include "wall/Wall.h"

Wall::Wall() { ; }

void Wall::enter() {
	logMessage("enter a wall.");
}

void Wall::printInfo() {
	logMessage("I am a wall.");
}

Wall* Wall::clone() {
	return nullptr;
}