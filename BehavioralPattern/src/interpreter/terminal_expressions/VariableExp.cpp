#include "interpreter/terminal_expressions/VariableExp.h"
#include "interpreter/contexts/Context.h"
#include <string>

VariableExp::VariableExp(const char* name)
	: BooleanExp() {
	m_name = _strdup(name);
}
VariableExp::~VariableExp() { ; }

bool VariableExp::evaluate(Context* context) {
	return context->lookup(m_name);
}
//use an expression to replace a variable.
BooleanExp* VariableExp::replace(const char* name, BooleanExp* exp) {
	if (strcmp(m_name, name) == 0) {
		return exp->copy();
	}
	else {
		return new VariableExp(m_name);
	}
}
BooleanExp* VariableExp::copy() const {
	return new VariableExp(m_name);
}

const char* VariableExp::getName() {
	return m_name;
}