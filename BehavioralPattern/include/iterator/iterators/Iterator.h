#pragma once
template<typename Item>
class Iterator {
	virtual void first() = 0;
	virtual void next() = 0;
	virtual bool isDone() const = 0;
	virtual Item currentItem() const = 0;
protected:
	Iterator();
};