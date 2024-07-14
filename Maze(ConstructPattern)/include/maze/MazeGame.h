#pragma once
#include "Maze.h"
#include "factory/MazeFactory.h"
#include "builder/MazeBuilder.h"

class MazeGame {
private:
	static MazeGame mazeGame;
public:
	MazeGame();

	static const MazeGame& getInstance();
	Maze* createMazeByFactory(const MazeFactory&);
	Maze* createMazeByBuilder(const MazeBuilder&);
};