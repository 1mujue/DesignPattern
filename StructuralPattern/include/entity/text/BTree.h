#pragma once
#include "entity/text/Font.h"
#include <unordered_map>

class BTree {
private:
	std::unordered_map<int, Font*> m_fonts;
public:
	void setFont(Font*, int, int);
	Font* getFont(int);
};