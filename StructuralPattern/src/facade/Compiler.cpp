#include "facade/Compiler.h"
#include "facade/Scanner.h"
#include "facade/ProgramNodeBuilder.h"
#include "facade/Parser.h"
#include "facade/code_generator/RISCCodeGenerator.h"

Compiler::Compiler() {
	;
}

void Compiler::compile(std::istream& is, ByteCodeStream& bcs) {
	Scanner scanner(is);
	ProgramNodeBuilder builder;
	Parser parser;

	parser.parse(scanner, builder);

	RISCCodeGenerator generator(bcs);
	ProgramNode* parseTree = builder.getRootNode();
	parseTree->traverse(&generator);
}