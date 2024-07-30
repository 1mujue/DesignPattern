#pragma once
#include "abstract_factory/abstract_factories/MazeFactory.h"
#include "abstract_factory/concrete_products/EnchantedRoom.h"
#include "abstract_factory/concrete_products/EnchantedDoor.h"

class EnchantedMazeFactory : public MazeFactory {
private:
	int m_magic;
public:
	EnchantedMazeFactory(int);

	virtual Maze* makeMaze() const;
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};