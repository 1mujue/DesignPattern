#include "memento/ConstraintSolver.h"
#include "memento/MoveCommand.h"

MoveCommand::MoveCommand(Graphic*, const Point&) {
	;
}
void MoveCommand::execute() {
	ConstraintSolver* solver = ConstraintSolver::instance;
	m_state = solver->createMemento();
	m_target->move(m_delta);
	solver->solve();
}
void MoveCommand::unexecute() {
	ConstraintSolver* solver = ConstraintSolver::instance;
	m_target->move(m_delta * -1);
	solver->setMemento(m_state);
	solver->solve();
}