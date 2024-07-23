#include "maze/MazeGame.h"

MazeGame::MazeGame() { ; }

/*
* Here, we just need to pass in a maze factory, based on this factory,
* we could create different mazes (enchanted, bomb, etc.). That make thing easy,
* since we ONLY need one method to create many kinds of maze! That's cool!
* 
* How does it happen??? If you are confused, you should learn POLYMORPHISM.
*/
Maze* MazeGame::createMazeByAbstactFactory(const MazeFactory* mazeFactory) {
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
Maze* MazeGame::createMazeByBuilder(const MazeBuilder* mazeBuilder) {
	return nullptr;
}

Maze* MazeGame::createMazeByFactoryMethod(const MazeCreator* mazeCreator) {
	return nullptr;
}