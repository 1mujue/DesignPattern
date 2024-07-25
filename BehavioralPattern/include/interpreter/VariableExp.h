#pragma once
#include "BooleanExp.h"

class VariableExp : public BooleanExp {
public:
	VariableExp(Context*, const char*);
	virtual ~VariableExp();

	virtual bool evaluate(Context*);
	virtual BooleanExp* replace(const char*, BooleanExp*);
	virtual BooleanExp* copy() const;
	const char* getName();
private:
	char* m_name;
	Context* m_context;
};