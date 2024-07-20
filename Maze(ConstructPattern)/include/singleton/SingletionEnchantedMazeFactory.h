#pragma once
#include "singleton/SingletonMazeFactory.h"

class SingletonEnchantedMazeFactory : public SingletonMazeFactory {
private:
	static int m_magic;
	static SingletonEnchantedMazeFactory* instance;
public:
	static SingletonEnchantedMazeFactory* getInstance();

	static void setMagic(int);
	static int getMagic();

	virtual Maze* makeMaze() const;
	virtual Wall* makeWall() const;
	virtual Room* makeRoom(int) const;
	virtual Door* makeDoor(Room*, Room*) const;
private:
	SingletonEnchantedMazeFactory(int = 0);
};