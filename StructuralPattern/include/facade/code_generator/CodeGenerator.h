#pragma once
#include "entity/CodeGenerator_ProgramNode.h"
#include "entity/compiler/ByteCodeStream.h"

class CodeGenerator {
protected:
	ByteCodeStream& m_output;
protected:
	CodeGenerator(ByteCodeStream&);
public:
	virtual void visit(StatementNode*);
	virtual void visit(ExpressionNode*);
};