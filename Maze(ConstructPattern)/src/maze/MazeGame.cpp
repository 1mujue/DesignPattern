#include "maze/MazeGame.h"

MazeGame::MazeGame() { ; }

Maze* MazeGame::createMazeByAbstactFactory(const MazeFactory* mazeFactory) {
	return nullptr;
}
Maze* MazeGame::createMazeByBuilder(const MazeBuilder* mazeBuilder) {
	return nullptr;
}

Maze* MazeGame::createMazeByFactoryMethod(const MazeCreator* mazeCreator) {
	return nullptr;
}