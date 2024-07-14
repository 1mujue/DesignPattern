#pragma once
#include <iostream>
#include "tool/log.h"

class Bomb {
protected:
	int m_damage;
	bool m_isBombed;
	const char* message;
public:
	Bomb(int);
	void setDamage(int);
	int getDamage();
};