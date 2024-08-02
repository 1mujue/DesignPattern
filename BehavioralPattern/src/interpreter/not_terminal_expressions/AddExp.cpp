#include "interpreter/not_terminal_expressions/AddExp.h"

AddExp::AddExp(BooleanExp* be1, BooleanExp* be2)
	: m_operand1(be1), m_operand2(be2) {
	;
}
AddExp::~AddExp() { ; }

bool AddExp::evaluate(Context* context) {
	return m_operand1->evaluate(context) && m_operand2->evaluate(context);
}
BooleanExp* AddExp::replace(const char* name, BooleanExp* exp) {
	return new AddExp(
		m_operand1->replace(name, exp),
		m_operand2->replace(name, exp)
	);
}
BooleanExp* AddExp::copy() const {
	return new AddExp(m_operand1->copy(), m_operand2->copy());
}