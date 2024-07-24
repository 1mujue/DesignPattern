#pragma once
#include "MazeCreator.h"
#include "entity/type/Bomb.h"

class BombMazeCreator : public MazeCreator, public Bomb {
public:
	BombMazeCreator(int);

	virtual Maze* createMaze();

	//factory methods:
	virtual Room* makeRoom(int) const;
	virtual Wall* makeWall() const;
};