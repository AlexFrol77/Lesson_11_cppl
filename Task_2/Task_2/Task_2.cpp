#include <iostream>
#include <string> 
#include "BigInteger.h"
#include "BigInteger.cpp"



int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");

	std::string tempStr = "78524";
	auto test_1 = BigInteger<std::string>("114575");
	auto test_2 = BigInteger<std::string>(tempStr);

	auto result_mult = test_1 * test_2;
	auto result_sum = test_1 + test_2;

	std::cout << result_mult << "\n" << result_sum << "\n";

	return 0;
}