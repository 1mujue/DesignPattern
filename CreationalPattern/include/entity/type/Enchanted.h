#pragma once
#include <iostream>
#include "tool/log.h"

class Enchanted {
protected:
	int m_magic;
	bool m_isMagic;
	const char* message;
public:
	Enchanted(int);
	void setMagic(int);
	int getMagic();
};