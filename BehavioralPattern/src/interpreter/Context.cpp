#include "interpreter/VariableExp.h"
#include "interpreter/Context.h"

bool Context::lookup(const char* name) const {
	return m_variableMap.find(name)->second;
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