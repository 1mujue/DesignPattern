#include "facade/sub-system_classes/code_generators/CodeGenerator.h"
#include "entity/compiler/program_node/ExpressionNode.h"
#include "entity/compiler/program_node/StatementNode.h"
#include "tool/log.h"

CodeGenerator::CodeGenerator(ByteCodeStream& bcs) 
	: m_output(bcs) {
	;
}
void CodeGenerator::visit(StatementNode* node) {
	logMessage("I am visit statement node");
}
void CodeGenerator::visit(ExpressionNode* node) {
	logMessage("I am visit expression node");
}