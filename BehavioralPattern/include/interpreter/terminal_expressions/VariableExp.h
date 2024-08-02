#pragma once
#include "interpreter/abstract_expressions/BooleanExp.h"

class VariableExp : public BooleanExp {
public:
	VariableExp(const char*);
	virtual ~VariableExp();

	virtual bool evaluate(Context*);
	virtual BooleanExp* replace(const char*, BooleanExp*);
	virtual BooleanExp* copy() const;
	const char* getName();
private:
	char* m_name;
};