#pragma once
#include "connection/CC.h"
#include "tool/log.h"

class Compositor {
public:
	virtual void compose();
protected:
	Compositor();
};