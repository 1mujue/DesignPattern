#pragma once
#include "entity/wall/BombWall.h"
#include "MazeFactory.h"
#include "entity/room/BombRoom.h"

class BombMazeFactory : public MazeFactory {
private:
	int m_damage;
public:
	BombMazeFactory(int);

	virtual Maze* makeMaze() const;
	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;

};