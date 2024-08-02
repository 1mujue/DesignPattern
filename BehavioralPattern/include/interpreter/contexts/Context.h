#pragma once
#include "connection/BC.h"
#include <unordered_map>

class Context {
private:
	std::unordered_map<const char*, bool> m_variableMap;
public:
	bool lookup(const char*) const;
	void assign(VariableExp*, bool);
};