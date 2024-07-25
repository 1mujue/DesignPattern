#pragma once
#include "BooleanExp.h"

class ConstantExp : public BooleanExp {
public:
	ConstantExp(bool);
	virtual ~ConstantExp();

	virtual bool evaluate(Context*);
	virtual BooleanExp* replace(const char*, BooleanExp*);
	virtual BooleanExp* copy() const;
private:
	bool m_boolean;
};