#pragma once
#include "entity/door/Door.h"
#include "entity/room/Room.h"
#include "entity/wall/Wall.h"
#include "maze/Maze.h"

class MazeCreator {
protected:
	Maze* maze;
public:
	//I didn't use BombMaze or EnchantedMaze to represent different type 
	//of maze, so it is unnecessary to overide initMaze(). Therefore, it is 
	//NOT VIRTUAL!!!
	void initMaze();
	//However, the concrete process of creating a maze is quite different,
	//so it has to be overrided.
	virtual Maze* createMaze();

	//factory methods:
	virtual Room* makeRoom(int) const;
	virtual Wall* makeWall() const;
	virtual Door* makeDoor(Room*, Room*) const;
};