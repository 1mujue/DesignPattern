#pragma once
#include "entity/Maze.h"
#include "abstract_factory/MazeFactory.h"
#include "builder/MazeBuilder.h"
#include "factory_method/MazeCreator.h"
#include "prototype/MazePrototypeFactory.h"
#include "singleton/SingletonMazeFactory.h"

class MazeGame {
private:
	static MazeGame* mazeGame;
public:
	MazeGame();

	static MazeGame* getInstance();
	Maze* createMazeByAbstactFactory(MazeFactory*);
	Maze* createMazeByBuilder(MazeBuilder*);
	Maze* createMazeByFactoryMethod(MazeCreator*);
	Maze* createMazeByPrototype(MazePrototypeFactory*);
	Maze* createMazeBySingleton(const char*);
};