#include "facade/Scanner.h"

Scanner::Scanner(std::istream& is)
	: m_inputStream(is) {
	;
}
Scanner::~Scanner() { ; }

Token* Scanner::Scan() {
	return nullptr;
}