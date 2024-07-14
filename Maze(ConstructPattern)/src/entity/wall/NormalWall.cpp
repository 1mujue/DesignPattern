#include "wall/NomalWall.h"

NormalWall::NormalWall() 
	: Wall() {
	;
}

void NormalWall::enter() {
	logMessage("enter a normal wall.");
}
void NormalWall::printInfo() {
	logMessage("I am a normal wall.");
}