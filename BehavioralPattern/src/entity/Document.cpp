#include "entity/Document.h"
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
	logMessage("call document's open");
}
void Document::execute() {
	logMessage("call document's execute");
}