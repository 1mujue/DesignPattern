#include "MazeGame.h"
#include "singleton/SingletonBombMazeFactory.h"
#include "singleton/SingletonEnchantedMazeFactory.h"

MazeGame::MazeGame() { ; }

MazeGame* MazeGame::mazeGame = 0;
MazeGame* MazeGame::getInstance() {
	return mazeGame;
}
/*
* Here, we just need to pass in a Maze Factory, based on this factory,
* we could create different mazes (enchanted, bomb, etc.). That make thing easy,
* since we ONLY need one method to create many kinds of maze! That's cool!
* 
* How does it happen??? If you are confused, you should learn POLYMORPHISM.
*/
Maze* MazeGame::createMazeByAbstactFactory(MazeFactory* mazeFactory) {
	Maze* maze = mazeFactory->makeMaze();

	Room* r1 = mazeFactory->makeRoom(1);
	Room* r2 = mazeFactory->makeRoom(2);

	Door* d0 = mazeFactory->makeDoor(r1, r2);

	maze->addRoom(r1);
	maze->addRoom(r2);

	r1->setSite(North, mazeFactory->makeWall());
	r1->setSite(South, mazeFactory->makeWall());
	r1->setSite(East, d0);
	r1->setSite(West, mazeFactory->makeWall());

	r2->setSite(North, mazeFactory->makeWall());
	r2->setSite(South, mazeFactory->makeWall());
	r2->setSite(West, d0);
	r2->setSite(East, mazeFactory->makeWall());
	
	return maze;
}

/*
* This method just needs a Maze Builder, based on this maze builder,
* we could create a lot of different mazes.
* 
* However, because a concrete pattern wil usually match a concrete product,
* so you may write a lot of quite different methods to create a certain product.
*/
Maze* MazeGame::createMazeByBuilder(MazeBuilder* mazeBuilder) {
	mazeBuilder->buildMaze();

	mazeBuilder->buildRoom(1);
	mazeBuilder->buildRoom(2);
	mazeBuilder->buildDoor(1, 2);

	return mazeBuilder->getMaze();
}

/*
* This is how Factory Method different from Abstract Factory and Builder Pattern.
* A Creator would return a WHOLE object, whereas Abstract Factory and Builder would
* return different PARTS of a complex object, and then group them up.
*/
Maze* MazeGame::createMazeByFactoryMethod(MazeCreator* mazeCreator) {
	return mazeCreator->createMaze();
}

/*
* It is almost the same as createMazeByAbstractFactory, but the difference is,
* we don't have to pass in different sub class of Maze Factory, we just need to 
* set different type of Wall, Room and Door in Maze Prototype Factory, then we can 
* create different type of maze. That reduce the number of class!
*/
Maze* MazeGame::createMazeByPrototype(MazePrototypeFactory* mazePrototypeFactory) {
	Maze* maze = mazePrototypeFactory->makeMaze();

	Room* r1 = mazePrototypeFactory->makeRoom(3);
	Room* r2 = mazePrototypeFactory->makeRoom(4);

	Door* d0 = mazePrototypeFactory->makeDoor(r1, r2);

	r1->setSite(North, mazePrototypeFactory->makeWall());
	r1->setSite(South, mazePrototypeFactory->makeWall());
	r1->setSite(East, d0);
	r1->setSite(West, mazePrototypeFactory->makeWall());

	r2->setSite(North, mazePrototypeFactory->makeWall());
	r2->setSite(South, mazePrototypeFactory->makeWall());
	r2->setSite(West, d0);
	r2->setSite(East, mazePrototypeFactory->makeWall());

	maze->addRoom(r1);
	maze->addRoom(r2);
	
	return maze;
}

Maze* MazeGame::createMazeBySingleton(const char* name) {
	SingletonMazeFactory* smf1 = SingletonMazeFactory::getInstance();
	SingletonMazeFactory* smf2 = SingletonBombMazeFactory::getInstance();
	SingletonMazeFactory* smf3 = SingletonEnchantedMazeFactory::getInstance();

	SingletonMazeFactory* smf = smf1->getInstance("singleton");

	Maze* maze = smf->makeMaze();
	
	Room* r1 = smf->makeRoom(1);
	Room* r2 = smf->makeRoom(2);

	Door* d0 = smf->makeDoor(r1, r2);

	r1->setSite(North, smf->makeWall());
	r1->setSite(South, smf->makeWall());
	r1->setSite(East, d0);
	r1->setSite(West, smf->makeWall());

	r2->setSite(North, smf->makeWall());
	r2->setSite(South, smf->makeWall());
	r2->setSite(West, d0);
	r2->setSite(East, smf->makeWall());

	maze->addRoom(r1);
	maze->addRoom(r2);

	return maze;
}