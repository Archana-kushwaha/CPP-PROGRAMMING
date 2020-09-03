#include<iostream>
int main() {
	int var = 10;
	const int var2 = 20;
	const int* ptr1 = &var;  //pointer to an constant integer
	// *ptr1 = 20; // invalid
	ptr1 = &var2;
	std::cout << ptr1 << std::endl;
	int num = 100;
	int num1 = 200;
	int* const ptr2 = &num;  //constant pointer to an integer
	//ptr2 = &num2;  //invalid
	*ptr2 = 200;
	std::cout << ptr2 << std::endl;
	int count = 22;
	int count1 = 33;
	const int* const ptr3 = &count; //constant pointer to an constant integer
	//*ptr3 = 33;  //invalid
	//ptr3 = &count1; //invalid
	std::cout << ptr3 << std::endl;
	return 0;
}
