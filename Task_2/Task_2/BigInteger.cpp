#include "BigInteger.h"
#include <string>


template <class T>
BigInteger<T>::BigInteger() {
	this->ptr_data_ = new T(0);
}

template <class T>
BigInteger<T>::BigInteger(T&& num) {
	this->ptr_data_ = new T(num); 
}

template <class T>
BigInteger<T>::BigInteger(T& num) {
	this->ptr_data_ = new T(num);
}

template <class T>
BigInteger<T>::BigInteger(BigInteger&& other) {
	this->ptr_data_ = other.ptr_data_;
	other.ptr_data_ = nullptr;
}

template <class T>
BigInteger<T>::BigInteger(const BigInteger& other) {
	this->ptr_data_ = new T(*other.ptr_data_);

}

template <class T>
BigInteger<T>::~BigInteger() {
	delete ptr_data_;
}

template <class T>
BigInteger<T>& BigInteger<T>::operator=(BigInteger& other) {
	delete this->ptr_data_;
	this->ptr_data_ = new T(*other.ptr_data_);
	return *this;
}

template <class T>
BigInteger<T>& BigInteger<T>::operator=(T&& num) {
	delete this->ptr_data_;
	this->ptr_data_ = new T(num);
	return *this;
}

template <class T>
T BigInteger<T>::operator+(BigInteger& r_op) {
	long long temp_l_op = std::stoi(this->GetData());
	long long temp_r_op = std::stoi(r_op.GetData());
	return std::to_string(temp_l_op + temp_r_op);
}

template <class T>
T BigInteger<T>::operator*(BigInteger& r_op) {
	long long temp_l_op = std::stoi(this->GetData());
	long long temp_r_op = std::stoi(r_op.GetData());
	return std::to_string(temp_l_op * temp_r_op);
}

template <class T>
T BigInteger<T>::GetData() {
	return *ptr_data_;
}
