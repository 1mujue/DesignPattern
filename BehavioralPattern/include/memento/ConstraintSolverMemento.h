#pragma once
#include "ConstraintSolver.h"

class ConstraintSolverMemento {
public:
	virtual ~ConstraintSolverMemento();
private:
	friend class ConstraintSolver;
	ConstraintSolverMemento();
};