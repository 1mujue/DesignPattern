#pragma once
#include "command/commands/Command.h"
#include "command/receivers/Document.h"

class PasteCommand : public Command {
public:
	PasteCommand(Document*);

	virtual void execute();
private:
	Document* m_document;
};