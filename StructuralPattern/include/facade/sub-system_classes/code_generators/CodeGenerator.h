#pragma once
#include "connection/CP.h"
#include "entity/compiler/ByteCodeStream.h"

class CodeGenerator {
protected:
	ByteCodeStream& m_output;
protected:
	CodeGenerator(ByteCodeStream&);
public:
	//Visitor Pattern.
	virtual void visit(StatementNode*);
	virtual void visit(ExpressionNode*);
};