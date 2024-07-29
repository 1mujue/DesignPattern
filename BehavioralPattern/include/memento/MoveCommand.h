#pragma once
#include "entity/Graphic.h"
#include "entity/Point.h"
#include "ConstraintSolverMemento.h"

class MoveCommand {
public:
	MoveCommand(Graphic*, const Point&);
	void execute();
	void unexecute();
private:
	ConstraintSolverMemento* m_state;
	Point m_delta;
	Graphic* m_target;
};