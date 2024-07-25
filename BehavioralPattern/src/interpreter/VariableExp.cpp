#include "interpreter/VariableExp.h"
#include <string>

VariableExp::VariableExp(Context* context,const char* name)
	: BooleanExp() {
	m_name = strdup(name);
	m_context = context;
	
}
VariableExp::~VariableExp() { ; }

bool VariableExp::evaluate(Context& context) {
	return context.lookup(m_name);
}
BooleanExp* VariableExp::replace(const char* name, BooleanExp* exp) {
	if (strcmp(m_name, name) == 0) {
		return exp->copy();
	}
	else {
		return new VariableExp(m_context, m_name);
	}
}
BooleanExp* VariableExp::copy() const {
	return new VariableExp(m_context, m_name);
}

const char* VariableExp::getName() {
	return m_name;
}