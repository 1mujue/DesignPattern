#pragma once
#include "BooleanExp.h"

class NotExp : public BooleanExp {
public:
	NotExp(BooleanExp*);
	virtual ~NotExp();

	virtual bool evaluate(Context*);
	virtual BooleanExp* replace(const char*, BooleanExp*);
	virtual BooleanExp* copy() const;
private:
	BooleanExp* m_operand1;
};