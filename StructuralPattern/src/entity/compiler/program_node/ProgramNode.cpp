#include "entity/compiler/program_node/ProgramNode.h"
#include "facade/sub-system_classes/code_generators/CodeGenerator.h"
#include "tool/log.h"

ProgramNode::ProgramNode()
	: m_type("program node") {
	;
}

void ProgramNode::getSourcePosition(int&, int& ) {
	logMessage("get source position...");
}

void ProgramNode::add(ProgramNode*) {
	logMessage("add program node...");
}

void ProgramNode::remove(ProgramNode*) {
	logMessage("remove program node...");
}

void ProgramNode::traverse(CodeGenerator*) {
	logMessage("traverse...");
}