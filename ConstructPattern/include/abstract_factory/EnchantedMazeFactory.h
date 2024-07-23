#pragma once
#include "MazeFactory.h"
#include "room/EnchantedRoom.h"
#include "door/EnchantedDoor.h"
/*
* this is a concrete factory, it will create a maze with magic!
*/
class EnchantedMazeFactory : public MazeFactory {
private:
	int m_magic;
public:
	EnchantedMazeFactory(int);

	virtual Maze* makeMaze() const;
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};