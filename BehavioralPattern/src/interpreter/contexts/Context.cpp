#include "interpreter/terminal_expressions/VariableExp.h"
#include "interpreter/contexts/Context.h"

bool Context::lookup(const char* name) const {
	auto it = m_variableMap.find(name);
	if (it == m_variableMap.end()) {
		return false;
	}
	else {
		return it->second;
	}
}
void Context::assign(VariableExp* exp, bool boolean) {
	auto it = m_variableMap.find(exp->getName());
	if (it == m_variableMap.end()) {
		m_variableMap.insert({ exp->getName(), boolean });
	}
	else {
		it->second = boolean;
	}
}