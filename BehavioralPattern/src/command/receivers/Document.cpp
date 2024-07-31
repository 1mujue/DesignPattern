#include "command/receivers/Document.h"
#include "tool/log.h"

Document::Document(const char* content)
	:m_content(content) {
	;
}

const char* Document::getContent() {
	return m_content;
}
void Document::setContent(const char* content) {
	m_content = content;
}
void Document::open() {
	logMessage("open in document...");
}
void Document::execute() {
	logMessage("execute in document...");
}