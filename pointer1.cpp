#include<iostream>
int main()
{
	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = i; //give it index value
		int* ptr = array;
		std::cout << (*ptr) << std::endl;
		std::cout << (*++ptr) << std::endl;
		std::cout << (*(ptr+5)) << std::endl;
	}
}