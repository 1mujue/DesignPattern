#include "singleton/singletons/SingletonMazeFactory.h"

SingletonMazeFactory* SingletonMazeFactory::m_instance = 0;
std::unordered_map<const char*, SingletonMazeFactory*> SingletonMazeFactory::m_registry;

void SingletonMazeFactory::registerSingleton(const char* name, SingletonMazeFactory* instance) {
	if (m_registry.find(name) != m_registry.end()) {
		m_registry.erase(name);
	}
	m_registry.insert({ name, instance });
}
SingletonMazeFactory* SingletonMazeFactory::getInstance(const char* name) {
	if (name == nullptr) {
		name = "singleton";
	}
	m_instance = lookupSingletonMazeFactory(name);
	return m_instance;
}
SingletonMazeFactory* SingletonMazeFactory::lookupSingletonMazeFactory(const char* name) {
	return m_registry.find(name)->second;
}