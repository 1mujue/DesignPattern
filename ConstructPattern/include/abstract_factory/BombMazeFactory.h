#pragma once
#include "wall/BombWall.h"
#include "MazeFactory.h"
#include "room/BombRoom.h"
/*
* this is a concrete factory, it will create a maze with bomb!
*/

class BombMazeFactory : public MazeFactory {
private:
	int m_damage;
public:
	BombMazeFactory(int);

	virtual Maze* makeMaze() const;
	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;

};