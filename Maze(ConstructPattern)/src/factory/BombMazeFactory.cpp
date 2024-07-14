#include "factory/BombMazeFactory.h"

BombMazeFactory::BombMazeFactory() 
	: MazeFactory() {
	;
}

Room* BombMazeFactory::makeRoom(int id) const {
	int damage = inputDamage("please input damage of a bomb room:");
	return new BombRoom(id, damage);
}

Wall* BombMazeFactory::makeWall() const {
	int damage = inputDamage("please input damage of a bomb wall:");
	return new BombWall();
}

int BombMazeFactory::inputDamage(const char* message) const {
	int damage;
	logMessage(message);
	std::cin >> damage;
	return damage;
}