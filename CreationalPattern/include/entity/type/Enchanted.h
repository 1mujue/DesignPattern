#pragma once
#include <iostream>
#include "tool/log.h"

class Enchanted {
protected:
	int p_magic;
	bool p_isMagic;
	const char* p_message;
public:
	Enchanted(int);
	void setMagic(int);
	int getMagic();
};