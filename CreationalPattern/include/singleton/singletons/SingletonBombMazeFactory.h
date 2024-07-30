#pragma once
#include "singleton/singletons/SingletonMazeFactory.h"
#include "entity/room/BombRoom.h"
#include "entity/wall/BombWall.h"

class SingletonBombMazeFactory : public SingletonMazeFactory {
private:
	static int m_damage;
	static SingletonBombMazeFactory* instance;
public:
	static SingletonBombMazeFactory* getInstance();

	static void setDamage(int);
	static int getDamage();

	virtual Maze* makeMaze() const;
	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
private:
	SingletonBombMazeFactory(int = 0);
};