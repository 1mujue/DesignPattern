#pragma once
#include "CodeGenerator.h"

class RISCCodeGenerator : public CodeGenerator {
public:
	RISCCodeGenerator(ByteCodeStream&);

	void RISC();
};