#include "singleton/SingletonBombMazeFactory.h"
#include "entity/room/BombRoom.h"
#include "entity/wall/BombWall.h"


int SingletonBombMazeFactory::m_damage = 0;
SingletonBombMazeFactory* SingletonBombMazeFactory::instance;

SingletonBombMazeFactory* SingletonBombMazeFactory::getInstance() {
	if (instance == 0) {
		instance = new SingletonBombMazeFactory(0);
	}
	return instance;
}

void SingletonBombMazeFactory::setDamage(int damage) {
	m_damage = damage;
}
int SingletonBombMazeFactory::getDamage() {
	return m_damage;
}

Maze* SingletonBombMazeFactory::makeMaze() const {
	return new Maze();
}
Wall* SingletonBombMazeFactory::makeWall() const {
	return new BombWall(m_damage);
}
Room* SingletonBombMazeFactory::makeRoom(int id) const {
	return new BombRoom(id, m_damage);
}
Door* SingletonBombMazeFactory::makeDoor(Room* r1, Room* r2)  const {
	return new Door(r1, r2);
}

SingletonBombMazeFactory::SingletonBombMazeFactory(int damage)
	: SingletonMazeFactory() {
	m_damage = damage;
	registerSingleton("bomb_singleton", this);
}