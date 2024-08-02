#pragma once
#include "memento/originators/ConstraintSolver.h"
#include "connection/CC.h"

class ConstraintSolverMemento {
public:
	virtual ~ConstraintSolverMemento();
private:
	//ONLY originator(Constraint Solver) can instantiate
	//this class, since its constructor is private.
	friend class ConstraintSolver;
	ConstraintSolverMemento();
	//there should be other attributes to record state of originator...
};