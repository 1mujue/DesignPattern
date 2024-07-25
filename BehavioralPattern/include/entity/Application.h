#pragma once
#include "Document.h"
#include <list>

class Application {
private:
	std::list<Document*> m_documents;
public:
	void addDocument(Document*);
	void removeDocument(Document*);
	void execute();
};