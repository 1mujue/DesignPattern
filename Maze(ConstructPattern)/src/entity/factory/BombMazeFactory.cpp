#include "factory/BombMazeFactory.h"

BombMazeFactory::BombMazeFactory() 
	: MazeFactory() {
	;
}

Room* BombMazeFactory::makeRoom(int id) const {
	return new BombRoom(id);
}

Wall* BombMazeFactory::makeWall() const {
	return new BombWall();
}