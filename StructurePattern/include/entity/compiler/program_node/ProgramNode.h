#pragma once
#include "facade/code_generator/CodeGenerator.h"

class ProgramNode {
protected:
	const char* m_type;
protected:
	ProgramNode(const char*);
public:
	virtual void getSourcePosition(int&, int&);

	virtual void add(ProgramNode*);
	virtual void remove(ProgramNode*);

	virtual void traverse(CodeGenerator*&);
};