#include "command/concrete_commands/PasteCommand.h"

PasteCommand::PasteCommand(Document* document) 
	:m_document(document) {
	;
}

void PasteCommand::execute() {
	logMessage("execute a paste command...");
	m_document->execute();
}