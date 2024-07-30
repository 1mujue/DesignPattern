#include "facade/sub-system_classes/ProgramNodeBuilder.h"
#include "tool/log.h"

ProgramNodeBuilder::ProgramNodeBuilder() { ; }

ProgramNode* ProgramNodeBuilder::newVariable(const char*)const {
	logMessage("get a new variable...");
	return nullptr;
}
ProgramNode* ProgramNodeBuilder::newAssignment(ProgramNode*) const {
	logMessage("get a new assignment...");
	return nullptr;
}
ProgramNode* ProgramNodeBuilder::newReturnStatement(ProgramNode*) const {
	logMessage("get a new return statement...");
	return nullptr;
}
ProgramNode* ProgramNodeBuilder::newCondition(ProgramNode*, ProgramNode*, ProgramNode*) const {
	logMessage("get a new condition...");
	return nullptr;
}
ProgramNode* ProgramNodeBuilder::getRootNode() {
	logMessage("get a root node...");
	return nullptr;
}