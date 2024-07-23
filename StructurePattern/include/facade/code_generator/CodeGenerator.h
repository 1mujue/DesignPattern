#pragma once
#include "entity/compiler/program_node/ExpressionNode.h"
#include "entity/compiler/program_node/StatementNode.h"
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