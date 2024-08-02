#include <iostream>
#include "tool/log.h"
#include "interpreter/abstract_expressions/BooleanExp.h"
#include "interpreter/contexts/Context.h"
#include "interpreter/not_terminal_expressions/AddExp.h"
#include "interpreter/not_terminal_expressions/NotExp.h"
#include "interpreter/not_terminal_expressions/OrExp.h"
#include "interpreter/terminal_expressions/ConstantExp.h"
#include "interpreter/terminal_expressions/VariableExp.h"


int main() {
	logCharacter('=', 50);
	logMessage("do interpreter pattern demonstration...");

	BooleanExp* exp;
	Context* context = new Context();

	VariableExp* x = new VariableExp("X");
	VariableExp* y = new VariableExp("Y");

	exp = new OrExp(
		new AddExp(new ConstantExp(true), x),
		new AddExp(y, new NotExp(x))
	);

	context->assign(x, false);
	context->assign(y, true);

	bool result = exp->evaluate(context);

	logMessage("the result of expression is:", ' ');
	std::cout << result << std::endl;

	std::cin.get();
}