#pragma once
#include "MazeCreator.h"
#include "entity/type/Enchanted.h"

class EnchantedMazeCreator : public MazeCreator, public Enchanted {
public:
	EnchantedMazeCreator(int);

	virtual Maze* createMaze();

	//factory methods:
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};