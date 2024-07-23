#pragma once
#include <iostream>
#include "entity/compiler/ByteCodeStream.h"

class Compiler {
public:
	Compiler();

	virtual void compile(std::istream&, ByteCodeStream&);
};