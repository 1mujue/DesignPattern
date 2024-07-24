#include "singleton/SingletionEnchantedMazeFactory.h"
#include "entity/room/EnchantedRoom.h"
#include "entity/door/EnchantedDoor.h"

int SingletonEnchantedMazeFactory::m_magic = 0;
SingletonEnchantedMazeFactory* SingletonEnchantedMazeFactory::instance = 0;

SingletonEnchantedMazeFactory* SingletonEnchantedMazeFactory::getInstance() {
	if (instance == 0) {
		instance = new SingletonEnchantedMazeFactory(0);
	}
	return instance;
}

void SingletonEnchantedMazeFactory::setMagic(int magic) {
	m_magic = magic;
}

int SingletonEnchantedMazeFactory::getMagic() {
	return m_magic;
}

Maze* SingletonEnchantedMazeFactory::makeMaze() const {
	return new Maze();
}
Wall* SingletonEnchantedMazeFactory::makeWall() const {
	return new Wall();
}
Room* SingletonEnchantedMazeFactory::makeRoom(int id) const {
	return new EnchantedRoom(id, m_magic);
}
Door* SingletonEnchantedMazeFactory::makeDoor(Room* r1, Room* r2) const {
	return new EnchantedDoor(r1, r2, m_magic);
}

SingletonEnchantedMazeFactory::SingletonEnchantedMazeFactory(int magic)
	: SingletonMazeFactory() {
	m_magic = magic;
	SingletonMazeFactory::registerSingleton("enchanted_singleton", this);
}