#include<iostream>
bool b1 = true;
bool b2 = false;
int SquareOfNumber1() {
	return (4 * 4);
}
int SquareOfNumber2() {
	return (8 * 8);
}
int main() {
	if (SquareOfNumber1 == SquareOfNumber2) {
		std::cout << b1 << std::endl;
	}else {
		std::cout << b2 << std::endl;
	}
}