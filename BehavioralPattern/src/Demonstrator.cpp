#include "Demonstrator.h"

Demonstrator::Demonstrator() { ; }
Demonstrator::~Demonstrator() { ; }

void Demonstrator::demonstrateInterpreter() {
	

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
}

void Demonstrator::demonstrateTemplateMethod() {
	View* view = new DerivedView();
	view->display();
}
