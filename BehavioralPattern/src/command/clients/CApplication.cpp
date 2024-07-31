#include "command/clients/CApplication.h"

void CApplication::addDocument(Document* document) {
	m_documents.push_back(document);
}

void CApplication::removeDocument(Document* document) {
	m_documents.remove(document);
}

void CApplication::execute() {
	logMessage("execute in application...");
}