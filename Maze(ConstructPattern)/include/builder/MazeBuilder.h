#pragma once
#include "maze/Maze.h"

class MazeBuilder {
protected:
	MazeBuilder();
public:
	virtual void buildMaze();
	virtual void buildRoom(int);
	virtual void buildDoor(int, int);

	virtual Maze* getMaze();
};