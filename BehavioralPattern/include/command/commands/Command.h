#pragma once
#include "tool/log.h"

class Command {
public:
	virtual ~Command();

	virtual void execute();
protected:
	Command();
};