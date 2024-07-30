#pragma once
#include "factory_method/creators/MazeCreator.h"
#include "factory_method/concrete_products/BombRoom.h"
#include "factory_method/concrete_products/BombWall.h"

//this is not so important.
#include "entity/type/Bomb.h"

class BombMazeCreator : public MazeCreator, public Bomb {
public:
	BombMazeCreator(int);

	virtual Maze* createMaze();

	//factory methods:
	virtual Room* makeRoom(int) const;
	virtual Wall* makeWall() const;
};