#include "factory_method/BombMazeCreator.h"
#include "entity/wall/BombWall.h"
#include "entity/room/BombRoom.h"

BombMazeCreator::BombMazeCreator(int damage)
	: MazeCreator(), Bomb(damage) {
	;
}

Maze* BombMazeCreator::createMaze() {
	return this->p_maze;
}

Wall* BombMazeCreator::makeWall() const {
	return new BombWall(p_damage);
}
Room* BombMazeCreator::makeRoom(int) const {
	return new BombRoom(p_damage);
}