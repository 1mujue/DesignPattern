#pragma once
#include "BooleanExp.h"

class AddExp : public BooleanExp {
public:
	AddExp(BooleanExp*, BooleanExp*);
	virtual ~AddExp();

	virtual bool evaluate(Context*);
	virtual BooleanExp* replace(const char*, BooleanExp*);
	virtual BooleanExp* copy() const;
private:
	BooleanExp* m_operand1;
	BooleanExp* m_operand2;
};