#include "command/PasteCommand.h"

PasteCommand::PasteCommand(Document* document) 
	:m_document(document) {
	;
}

void PasteCommand::execute() {
	m_document->execute();
}