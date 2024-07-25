#include "facade/ProgramNodeBuilder.h"

ProgramNodeBuilder::ProgramNodeBuilder() { ; }

ProgramNode* ProgramNodeBuilder::newVariable(const char*)const {
	return nullptr;
}
ProgramNode* ProgramNodeBuilder::newAssignment(ProgramNode*) const {
	return nullptr;
}
ProgramNode* ProgramNodeBuilder::newReturnStatement(ProgramNode*) const {
	return nullptr;
}
ProgramNode* ProgramNodeBuilder::newCondition(ProgramNode*, ProgramNode*, ProgramNode*) const {
	return nullptr;
}
ProgramNode* ProgramNodeBuilder::getRootNode() {
	return nullptr;
}