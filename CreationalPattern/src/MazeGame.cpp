#include "MazeGame.h"

MazeGame::MazeGame() { ; }

MazeGame MazeGame::mazeGame;
const MazeGame& MazeGame::getInstance() {
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

	Door* d1 = mazeFactory->makeDoor(r1, r2);

	maze->addRoom(r1);
	maze->addRoom(r2);

	r1->setSite(North, mazeFactory->makeWall());
	r1->setSite(South, mazeFactory->makeWall());
	r1->setSite(East, d1);
	r1->setSite(West, mazeFactory->makeWall());

	r2->setSite(North, mazeFactory->makeWall());
	r2->setSite(South, mazeFactory->makeWall());
	r2->setSite(West, d1);
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

Maze* MazeGame::createMazeByFactoryMethod(MazeCreator* mazeCreator) {
	return nullptr;
}