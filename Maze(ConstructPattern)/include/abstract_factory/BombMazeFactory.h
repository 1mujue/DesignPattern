#pragma once
#include "wall/BombWall.h"
#include "MazeFactory.h"
#include "room/BombRoom.h"


class BombMazeFactory : public MazeFactory {
private:
	int m_damage;
public:
	BombMazeFactory(int);

	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;

};