#pragma once
#include "factory_method/products/Door.h"
#include "factory_method/products/Maze.h"
#include "factory_method/products/Room.h"
#include "factory_method/products/Wall.h"

class MazeCreator {
protected:
	Maze* p_maze;
public:
	//I didn't use Bomb Maze or Enchanted Maze to represent different type 
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