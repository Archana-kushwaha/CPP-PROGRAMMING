#include<iostream>
class complex {
private:
	int num1, num2;
public:
	complex(int value) {
		num1 = value;
		num2 = value;    //constructor
	}
	void getvalue();
	void showvalue();
};
void complex::getvalue()
{
	std::cout << "enter two numbers" << std::endl;
	std::cin.get();
}
void complex::showvalue() {
	std::cout << num1 << num2 << std::endl;
}
int main() {
	complex c1 = 3;//constructor called
	c1.showvalue();
	return 0;
}