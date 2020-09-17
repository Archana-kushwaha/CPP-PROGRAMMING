#include<iostream>
inline int add(int, int);
int main() {
	int num1 =3, num2=6;
	int sum = add(num1, num2);
	std::cout << sum << std::endl;
	return 0;
}
int add(int val1, int val2) {
	return(val1 + val2);
}