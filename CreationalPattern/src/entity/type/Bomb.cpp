#include "entity/type/Bomb.h"

Bomb::Bomb(int damage) {
	m_damage = damage;
	m_isBombed = false;
	message = "please enter damage of a bomb class:";
}

void Bomb::setDamage(int damage) {
	m_damage = damage;
}
int Bomb::getDamage() {
	return m_damage;
}