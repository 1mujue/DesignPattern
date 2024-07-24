#pragma once
#include <iostream>
#include "tool/log.h"

class Bomb {
protected:
	int p_damage;
	bool p_isBombed;
	const char* p_message;
public:
	Bomb(int);
	void setDamage(int);
	int getDamage();
};