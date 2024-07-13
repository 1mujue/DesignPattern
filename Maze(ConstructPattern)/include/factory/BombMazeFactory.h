#pragma once
#include "wall/BombWall.h"
#include "factory/MazeFactory.h"
#include "room/BombRoom.h"

class BombMazeFactory : public MazeFactory {
public:
	BombMazeFactory();

	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;
};