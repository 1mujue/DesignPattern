#include "interpreter/NotExp.h"

NotExp::NotExp(BooleanExp* be1)
	: m_operand1(be1) {
	;
}
NotExp::~NotExp() { ; }

bool NotExp::evaluate(Context* context) {
	return !m_operand1->evaluate(context);
}
BooleanExp* NotExp::replace(const char* name, BooleanExp* exp) {
	return new NotExp(m_operand1->replace(name, exp));
}
BooleanExp* NotExp::copy() const {
	return new NotExp(m_operand1->copy());
}