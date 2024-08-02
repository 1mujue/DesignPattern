#include "memento/originators/ConstraintSolver.h"
#include "memento/mementoes/ConstraintSolverMemento.h"

ConstraintSolver* ConstraintSolver::instance;

void ConstraintSolver::solve() {
	logMessage("solve in constraint sovler...");
}
void ConstraintSolver::addConstraint(Graphic*, Graphic*) {
	logMessage("add constraint in constraint solver...");
}
void ConstraintSolver::removeConstraint(Graphic*, Graphic*) {
	logMessage("remove constraint in constraint solver...");
}
ConstraintSolverMemento* ConstraintSolver::createMemento() {
	logMessage("create a memento of constraint solver...");
	return new ConstraintSolverMemento();
}
void ConstraintSolver::setMemento(ConstraintSolverMemento*) {
	logMessage("set a memento of constraint solver...");
	//you should do something here to change the current state
	//to the state recorded in memento...
}