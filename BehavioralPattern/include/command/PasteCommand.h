#pragma once
#include "Command.h"
#include "entity/Document.h"

class PasteCommand : public Command {
private:
	Document* m_document;
public:
	PasteCommand(Document*);

	virtual void execute();
};