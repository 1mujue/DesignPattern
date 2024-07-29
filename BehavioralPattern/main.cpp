#include <iostream>
#include "tool/log.h"
#include "interpreter/BooleanExp.h"
#include "interpreter/AddExp.h"
#include "interpreter/ConstantExp.h"
#include "interpreter/Context.h"
#include "interpreter/NotExp.h"
#include "interpreter/OrExp.h"
#include "interpreter/VariableExp.h"


int main() {
	logCharacter('=', 50);
	logMessage("do interpreter pattern demonstration...");

	BooleanExp* exp;
	Context* context = new Context();

	VariableExp* x = new VariableExp(context, "X");
	VariableExp* y = new VariableExp(context, "Y");

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