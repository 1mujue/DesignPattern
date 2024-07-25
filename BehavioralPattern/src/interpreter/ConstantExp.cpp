#include "interpreter/ConstantExp.h"

ConstantExp::ConstantExp(bool boolean)
	: m_boolean(boolean) {
	;
}
ConstantExp::~ConstantExp() { ; }

bool ConstantExp::evaluate(Context*) {
	return m_boolean;
}
BooleanExp* ConstantExp::replace(const char*, BooleanExp*) {
	return new ConstantExp(m_boolean);
}
BooleanExp* ConstantExp::copy() const {
	return new ConstantExp(m_boolean);
}