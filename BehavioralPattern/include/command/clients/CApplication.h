#pragma once
#include "command/receivers/Document.h"
#include "tool/log.h"
#include <list>

class CApplication {
private:
	std::list<Document*> m_documents;
public:
	void addDocument(Document*);
	void removeDocument(Document*);
	void execute();
};