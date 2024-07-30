#include "facade/sub-system_classes/Parser.h"
#include "tool/log.h"

Parser::Parser() { ; }
Parser::~Parser() { ; }

void Parser::parse(Scanner&, ProgramNodeBuilder&) { 
	logMessage("start to parse...");
}