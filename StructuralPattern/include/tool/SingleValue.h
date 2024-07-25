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

template<typename T>
SingleValue<T>::SingleValue(T value)
	:value(value) {
	;
}

template<typename T>
SingleValue<T>::SingleValue() { ; }

template<typename T>
void SingleValue<T>::setValue(T value) {
	this->value = value;
}

template<typename T>
T SingleValue<T>::getValue() {
	return value;
}

template<typename T>
SingleValue<T> SingleValue<T>::operator+(const SingleValue& other) {
	SingleValue<T> ret;
	ret.setValue(this->getValue + other.value);
	return ret;
}

template<typename T>
SingleValue<T> SingleValue<T>::operator-(const SingleValue& other) {
	SingleValue<T> ret;
	ret.setValue(this->getValue - other.value);
	return ret;
}

template<typename T>
SingleValue<T> SingleValue<T>::operator*(const SingleValue& other) {
	SingleValue<T> ret;
	ret.setValue(this->getValue * other.value);
	return ret;
}

template<typename T>
SingleValue<T> SingleValue<T>::operator/(const SingleValue& other) {
	SingleValue<T> ret;
	ret.setValue(this->getValue / other.value);
	return ret;
}

template<typename T>
SingleValue<T> SingleValue<T>::operator=(const SingleValue& other) {
	return *this;
}