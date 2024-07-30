#pragma once
#include <iostream>
#include "entity/compiler/Token.h"

class Scanner {
private:
	std::istream& m_inputStream;
public:
	Scanner(std::istream&);
	virtual ~Scanner();

	virtual Token* scan();
};