#pragma once
#include "entity/CodeGenerator_ProgramNode.h"

class ProgramNode {
protected:
	const char* m_type;
protected:
	ProgramNode();
public:
	virtual void getSourcePosition(int&, int&);

	virtual void add(ProgramNode*);
	virtual void remove(ProgramNode*);

	virtual void traverse(CodeGenerator*);
};