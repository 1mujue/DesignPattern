#pragma once
#include "Maze.h"
#include "wall/Wall.h"
#include "room/Room.h"
#include "door/Door.h"

class MazeFactory {
public:
	MazeFactory();

	virtual Maze* makeMaze() const;
	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};