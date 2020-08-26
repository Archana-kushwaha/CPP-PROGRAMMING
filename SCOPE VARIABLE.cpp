#include<iostream>
int number = 10;  //global variable
int main() {
	void SumOfNumber();
	{
		int number = 5; //local variable
		int  temp = 0;
		for (int i = 0; i <= number; i++)
			temp = temp + i;
		number = temp;
	}
	//SumOfNumber(); //unresolved external
	int number = 15; //local variable to main
	std::cout << number;
	return 0;
}


 