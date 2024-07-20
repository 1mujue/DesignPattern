#pragma once
#include "MazeFactory.h"
#include "room/EnchantedRoom.h"
#include "door/EnchantedDoor.h"

//create a maze with magic!
class EnchantedMazeFactory : public MazeFactory {
private:
	int m_magic;
public:
	EnchantedMazeFactory(int);

	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};