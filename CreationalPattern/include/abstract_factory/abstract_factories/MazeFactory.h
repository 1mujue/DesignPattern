#pragma once
#include "abstract_factory/abstract_products/Maze.h"
#include "abstract_factory/abstract_products/Wall.h"
#include "abstract_factory/abstract_products/Room.h"
#include "abstract_factory/abstract_products/Door.h"

class MazeFactory {
public:
	MazeFactory();

	virtual Maze* makeMaze() const;
	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};