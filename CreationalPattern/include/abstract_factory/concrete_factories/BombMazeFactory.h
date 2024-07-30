#pragma once
#include "abstract_factory/abstract_factories/MazeFactory.h"
#include "abstract_factory/concrete_products/BombRoom.h"
#include "abstract_factory/concrete_products/BombWall.h"

class BombMazeFactory : public MazeFactory {
private:
	int m_damage;
public:
	BombMazeFactory(int);

	virtual Maze* makeMaze() const;
	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;

};