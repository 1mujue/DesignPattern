#include "abstract_factory/BombMazeFactory.h"

BombMazeFactory::BombMazeFactory(int damage) 
	: MazeFactory(),m_damage(damage) {
	;
}

Room* BombMazeFactory::makeRoom(int id) const {
	return new BombRoom(id, m_damage);
}

Wall* BombMazeFactory::makeWall() const {
	return new BombWall();
}