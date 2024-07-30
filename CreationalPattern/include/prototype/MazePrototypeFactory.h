#pragma once
#include "prototype/prototypes/Door.h"
#include "prototype/prototypes/Wall.h"
#include "prototype/prototypes/Maze.h"
#include "prototype/prototypes/Room.h"

class MazePrototypeFactory {
private:
	//prototypes.
	//we can pass in different type of prototype to "create" a new class,
	//which is in runtime. That means, we don't have to create class such as
	//EnchantedPrototypeFactory or BombPrototypeFactory, we just need to pass in
	//enchanted room and door or bomb room and wall, and then we will create a maze
	//based on them!
	Maze* m_maze;
	Wall* m_wall;
	Room* m_room;
	Door* m_door;
public:
	MazePrototypeFactory(Maze*, Wall*, Room*, Door*);

	virtual Maze* makeMaze() const;
	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};