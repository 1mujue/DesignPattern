#include "tool/log.h"

void logMessage(const char* message, char div) {
	std::cout << message << div;
}
void logCharacter(const char ch, int num, char div1, char div2) {
	for (int i = 0; i < num; ++i) {
		std::cout << ch << div1;
	}
	std::cout << div2;
}