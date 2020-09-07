#include<iostream>
int main() {
	int number1 = 5;
	int number2 = 8;
	int* ref = &number1;
	*ref = 2;
	ref = &number2;
	*ref = 1;
	std::cout << number1<< std::endl;
	std::cout << number2 << std::endl;
	std::cin.get();
}