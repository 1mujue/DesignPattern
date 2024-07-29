#include "adapter/adaptees/TextView.h"
#include "tool/log.h"

TextView::TextView(const char* message)
	: m_content(message) {
	;
}

void TextView::getOrigin() const {
	logMessage("get origin in text view...");
}
void TextView::getExtent() const {
	logMessage("get extent in text view...");

}
bool TextView::isEmpty() const {
	return m_content == nullptr;
}