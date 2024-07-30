#pragma once
#include "factory_method/creators/MazeCreator.h"
#include "factory_method/concrete_products/EnchantedDoor.h"
#include "factory_method/concrete_products/EnchantedRoom.h"

//this is not so important.
#include "entity/type/Enchanted.h"

class EnchantedMazeCreator : public MazeCreator, public Enchanted {
public:
	EnchantedMazeCreator(int);

	virtual Maze* createMaze();

	//factory methods:
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
};