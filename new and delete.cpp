#include<iostream>
int main() {
	int* p = new int;
	float* q = new float;
	*p = 5;
	*q = 22.40;
	std::cout << "*p=" << *p;
	std::cout << "*q=" << *q;
	delete p;
	delete q;
	return 0;
}