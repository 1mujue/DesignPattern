#pragma once
#include <unordered_map>


class BooleanExp {
public:
	BooleanExp();
	virtual ~BooleanExp();

	virtual bool evaluate(Context*) = 0;
	virtual BooleanExp* replace(const char*, BooleanExp*) = 0;
	virtual BooleanExp* copy() const = 0;
};

