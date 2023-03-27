#include <iostream>
#include <string>
#include <vector>

template <class T>
void move_vectors(std::vector<T>& vec_1, std::vector<T>& vec_2) {
	std::vector<T> tmp = std::move(vec_1);
	vec_1 = std::move(vec_2);
	vec_2 = std::move(tmp);
}

template <class T>
void print_vector(const std::vector<T>& vec_one, const std::vector<T>& vec_two) {
	std::cout << "Vector one: ";
	for (const auto& st : vec_one) {
		std::cout << st << " ";
	}
	std::cout << std::endl;
	std::cout << "Vector two: ";
	for (const auto& st : vec_two) {
		std::cout << st << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");

	std::vector <std::string> one = { "test_string1", "test_string2" };
	std::vector <std::string> two;

	print_vector(one, two);

	move_vectors(one, two);

	print_vector(one, two);

	return 0;
}