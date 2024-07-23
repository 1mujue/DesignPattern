#pragma once
#include "Scanner.h"
#include "ProgramNodeBuilder.h"

class Parser {
public:
	Parser();
	virtual ~Parser();

	virtual void parse(Scanner&, ProgramNodeBuilder&);
};