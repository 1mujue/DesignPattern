#pragma once
#include "MazeFactory.h"
#include "entity/room/EnchantedRoom.h"
#include "entity/door/EnchantedDoor.h"

class EnchantedMazeFactory : public MazeFactory {
private:
	int m_magic;
public:
	EnchantedMazeFactory(int);

	virtual Maze* makeMaze() const;
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};