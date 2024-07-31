#include "tool/log.h"
#include <iostream>

void logMessage(const char* message, char div) {
	std::cout << message << div;
}

void logVar(int var, char div) {
	std::cout << var << div;
}