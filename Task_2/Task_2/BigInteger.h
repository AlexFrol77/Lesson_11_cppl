#pragma once

template <class T>
class BigInteger {
public:
	BigInteger();
	BigInteger(T&& num);
	BigInteger(T& num);
	BigInteger(BigInteger&& other);
	BigInteger(const BigInteger& other);
	BigInteger& operator=(BigInteger& other);
	BigInteger& operator=(T&& other);
	~BigInteger();

	T operator+(BigInteger& r_op);
	T operator*(BigInteger& r_op);

	T GetData();


private:
	T* ptr_data_;
	
};