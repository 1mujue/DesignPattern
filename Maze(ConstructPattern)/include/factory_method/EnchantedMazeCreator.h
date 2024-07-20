#pragma once
#include "MazeCreator.h"

class EnchantedMazeCreator : public MazeCreator {
private:
	int m_magic;
public:
	EnchantedMazeCreator(int);

	virtual Maze* createMaze();

	//factory methods:
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};