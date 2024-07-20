#pragma once
#include "MazeCreator.h"

class BombMazeCreator : public MazeCreator {
private:
	int m_damage;
public:
	BombMazeCreator(int);

	virtual Maze* createMaze();

	//factory methods:
	virtual Room* makeRoom(int) const;
	virtual Wall* makeWall() const;
};