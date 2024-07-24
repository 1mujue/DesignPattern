#pragma once
#include "entity/Maze.h"
#include "entity/wall/Wall.h"
#include "entity/room/Room.h"
#include "entity/door/Door.h"

class MazeFactory {
public:
	MazeFactory();

	virtual Maze* makeMaze() const;
	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};