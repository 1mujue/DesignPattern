#pragma once
#include "tool/Direction.h"
#include "builder/builders/MazeBuilder.h"

class StandardMazeBuilder : public MazeBuilder {
private:
	Maze* m_currentMaze;
public:
	StandardMazeBuilder();

	virtual void buildMaze();
	virtual void buildRoom(int);
	virtual void buildDoor(int, int);

	virtual Maze* getMaze();
private:
	Direction commonWall(Room*, Room*);
};