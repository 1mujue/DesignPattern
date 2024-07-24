#include "factory_method/BombMazeCreator.h"
#include "entity/wall/BombWall.h"
#include "entity/room/BombRoom.h"

BombMazeCreator::BombMazeCreator(int damage)
	: MazeCreator(), m_damage(damage) {
	;
}

Maze* BombMazeCreator::createMaze() {
	return this->maze;
}

Wall* BombMazeCreator::makeWall() const {
	return new BombWall(m_damage);
}
Room* BombMazeCreator::makeRoom(int) const {
	return new BombRoom(m_damage);
}