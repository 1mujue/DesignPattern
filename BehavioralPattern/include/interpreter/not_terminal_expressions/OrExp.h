#pragma once
#include "interpreter/abstract_expressions/BooleanExp.h"

class OrExp : public BooleanExp {
public:
	OrExp(BooleanExp*, BooleanExp*);
	virtual ~OrExp();

	virtual bool evaluate(Context*);
	virtual BooleanExp* replace(const char*, BooleanExp*);
	virtual BooleanExp* copy() const;
private:
	BooleanExp* m_operand1;
	BooleanExp* m_operand2;
};