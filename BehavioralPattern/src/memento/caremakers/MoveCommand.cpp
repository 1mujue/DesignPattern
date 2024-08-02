#include "memento/originators/ConstraintSolver.h"
#include "memento/caremakers/MoveCommand.h"

MoveCommand::MoveCommand(Graphic* graphic)
	:m_target(graphic), m_state(nullptr) {
	;
}
void MoveCommand::execute() {
	logMessage("execute the move command...");
	ConstraintSolver* solver = ConstraintSolver::instance;
	m_state = solver->createMemento();
	m_target->move();
	solver->solve();
}
void MoveCommand::unexecute() {
	logMessage("unexecute the move command...");
	ConstraintSolver* solver = ConstraintSolver::instance;
	m_target->move();
	solver->setMemento(m_state);
	solver->solve();
}