#include<iostream>
//int Maximum(int val1,int val2);
// function to get minimum value between two numbers
int Minimum(int num1, int num2){

	//Maximum(num1,num2);
	return(num1 > num2) ? num2 : num1;
}
int main() {
	std::cout << Minimum(84, 24) << std::endl;  //calling minimum function
	std::cin.get();
}

