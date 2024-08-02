#pragma once
#include "entity/Graphic.h"
#include "connection/CSCS.h"

class ConstraintSolver {
public:
	static ConstraintSolver* instance;

	void solve();
	void addConstraint(Graphic*, Graphic*);
	void removeConstraint(Graphic*, Graphic*);
	ConstraintSolverMemento* createMemento();
	void setMemento(ConstraintSolverMemento*);
};