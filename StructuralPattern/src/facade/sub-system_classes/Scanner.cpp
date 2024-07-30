#include "facade/sub-system_classes/Scanner.h"
#include "tool/log.h"

Scanner::Scanner(std::istream& is)
	: m_inputStream(is) {
	;
}
Scanner::~Scanner() { ; }

Token* Scanner::scan() {
	logMessage("start to scan...");
	return nullptr;
};