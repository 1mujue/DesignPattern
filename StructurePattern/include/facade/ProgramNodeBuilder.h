#pragma once
#include "entity/compiler/program_node/ProgramNode.h"

class ProgramNodeBuilder {
private:
	ProgramNode* m_node;
public:
	ProgramNodeBuilder();

	virtual ProgramNode* newVariable(const char*)const;
	virtual ProgramNode* newAssignment(ProgramNode*) const;
	virtual ProgramNode* newReturnStatement(ProgramNode*) const;
	virtual ProgramNode* newCondition(ProgramNode*, ProgramNode*, ProgramNode*) const;
	ProgramNode* getRootNode();
};