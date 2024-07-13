#include "wall/BombWall.h"

BombWall::BombWall(int damage)
	: Wall(), m_damage(damage), m_isBombed(false) {
	;
}

void BombWall::Enter() {
	logMessage("enter a bomb wall.");
}