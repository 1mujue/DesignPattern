#pragma once
template<typename T>
class Iterator {
protected:
	Iterator();
public:
	virtual void first() = 0;
	virtual void last() = 0;
	virtual void next() = 0;
	virtual bool isDone() const = 0;
	virtual T getCurrentElement() const = 0;
};