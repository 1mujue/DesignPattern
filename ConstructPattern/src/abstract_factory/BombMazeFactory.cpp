#include "abstract_factory/BombMazeFactory.h"

BombMazeFactory::BombMazeFactory(int damage) 
	: MazeFactory(),m_damage(damage) {
	;
}

/*
* as you can see, we return a concrete product (Bomb) here.
*/
Room* BombMazeFactory::makeRoom(int id) const {
	return new BombRoom(id, m_damage);
}

Wall* BombMazeFactory::makeWall() const {
	return new BombWall();
}
Maze* BombMazeFactory::makeMaze() const {
	return new Maze("bomb maze");
}
