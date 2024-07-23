#include <iostream>
#include "tool/log.h"

void logMessage(const char* message, const char div) {
	std::cout << message << div;
}

void logCharacter(const char ch, int num, const char div) {
	for (int i = 0; i < num; ++i) {
		std::cout << ch;
	}
	std::cout << div;
}