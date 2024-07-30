#include "facade/facades/Compiler.h"
#include "facade/sub-system_classes/Scanner.h"
#include "facade/sub-system_classes/ProgramNodeBuilder.h"
#include "facade/sub-system_classes/Parser.h"
#include "facade/sub-system_classes/code_generators/RISCCodeGenerator.h"
#include "tool/log.h"

Compiler::Compiler() {
	;
}

void Compiler::compile(std::istream& is, ByteCodeStream& bcs) {
	logMessage("start to compile...");
	Scanner scanner(is);
	ProgramNodeBuilder builder;
	Parser parser;

	parser.parse(scanner, builder);

	RISCCodeGenerator generator(bcs);
	ProgramNode* parseTree = builder.getRootNode();
	parseTree->traverse(&generator);
}