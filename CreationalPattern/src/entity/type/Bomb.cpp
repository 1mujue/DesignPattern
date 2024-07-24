#include "entity/type/Bomb.h"

Bomb::Bomb(int damage) {
	p_damage = damage;
	p_isBombed = false;
	p_message = "please enter damage of a bomb class:";
}

void Bomb::setDamage(int damage) {
	p_damage = damage;
}
int Bomb::getDamage() {
	return p_damage;
}