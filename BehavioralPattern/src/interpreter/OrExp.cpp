#include "interpreter/OrExp.h"

OrExp::OrExp(BooleanExp* be1, BooleanExp* be2)
	: m_operand1(be1), m_operand2(be2) {
	;
}
OrExp::~OrExp() { ; }

bool OrExp::evaluate(Context& context) {
	return m_operand1->evaluate(context) || m_operand2->evaluate(context);
}
BooleanExp* OrExp::replace(const char* name, BooleanExp* exp) {
	return new OrExp(
		m_operand1->replace(name, exp),
		m_operand2->replace(name, exp)
	);
}
BooleanExp* OrExp::copy() const {
	return new OrExp(m_operand1->copy(), m_operand2->copy());
}