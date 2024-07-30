#pragma once
#include "entity/Maze.h"
#include "abstract_factory/abstract_factories/MazeFactory.h"
#include "builder/builders/MazeBuilder.h"
#include "factory_method/creators/MazeCreator.h"
#include "prototype/MazePrototypeFactory.h"
#include "singleton/singletons/SingletonMazeFactory.h"

class Demonstrator {
private:
	static Demonstrator* mazeGame;
public:
	Demonstrator();

	static Demonstrator* getInstance();
	Maze* createMazeByAbstactFactory(MazeFactory*);
	Maze* createMazeByBuilder(MazeBuilder*);
	Maze* createMazeByFactoryMethod(MazeCreator*);
	Maze* createMazeByPrototype(MazePrototypeFactory*);
	Maze* createMazeBySingleton(const char*);
};