#pragma once
#include "entity/Graphic.h"
#include "memento/mementoes/ConstraintSolverMemento.h"

class MoveCommand {
public:
	MoveCommand(Graphic*);
	void execute();
	void unexecute();
private:
	ConstraintSolverMemento* m_state;
	Graphic* m_target;
};