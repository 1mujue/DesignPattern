#include <iostream>
#include "tool/log.h"
#include "Demonstrator.h"
Demonstrator demonstrator;
int main() {
	logCharacter('=', 50);
	logMessage("do interpreter pattern demonstration...");
	demonstrator.demonstrateInterpreter();
	logMessage("finish interpreter pattern demonstration...");

	logCharacter('=', 50);
	logMessage("do template method pattern demonstration...");
	demonstrator.demonstrateTemplateMethod();
	logMessage("finish template method pattern demonstration...");

	std::cin.get();
}