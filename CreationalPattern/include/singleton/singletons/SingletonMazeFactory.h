#pragma once
#include <unordered_map>
#include "entity/Maze.h"
#include "entity/wall/Wall.h"
#include "entity/room/Room.h"
#include "entity/door/Door.h"

class SingletonMazeFactory {
private:
	static SingletonMazeFactory* m_instance;
	static std::unordered_map<const char*, SingletonMazeFactory*> m_registry;
public:
	static void registerSingleton(const char*, SingletonMazeFactory*);
	static SingletonMazeFactory* getInstance(const char* = nullptr);

	virtual Maze* makeMaze() const = 0;
	virtual Wall* makeWall() const = 0;
	virtual Room* makeRoom(int) const = 0;
	virtual Door* makeDoor(Room*, Room*) const = 0;
protected:
	static SingletonMazeFactory* lookupSingletonMazeFactory(const char*);
};