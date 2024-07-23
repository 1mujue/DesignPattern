#pragma once
template<typename T>
class SingleValue {
protected:
	T value;
public:
	SingleValue(T);
	SingleValue();

	void setValue(T);
	T getValue();

	SingleValue operator+(const SingleValue&);
	SingleValue operator-(const SingleValue&);
	SingleValue operator*(const SingleValue&);
	SingleValue operator/(const SingleValue&);
	SingleValue operator=(const SingleValue&);
};