#include "entity/Application.h"
void Application::addDocument(Document* document) {
	m_documents.push_back(document);
}

void Application::removeDocument(Document* document) {
	m_documents.remove(document);
}

void Application::execute() {

}