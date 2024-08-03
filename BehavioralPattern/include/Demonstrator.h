#pragma once
#include "interpreter/abstract_expressions/BooleanExp.h"
#include "interpreter/contexts/Context.h"
#include "interpreter/not_terminal_expressions/AddExp.h"
#include "interpreter/not_terminal_expressions/NotExp.h"
#include "interpreter/not_terminal_expressions/OrExp.h"
#include "interpreter/terminal_expressions/ConstantExp.h"
#include "interpreter/terminal_expressions/VariableExp.h"

#include "template_method/abstract_classes/View.h"
#include "template_method/concrete _classes/DerivedView.h"
class Demonstrator {
public:
	Demonstrator();
	virtual ~Demonstrator();

	void demonstrateInterpreter();
	void demonstrateTemplateMethod();
};