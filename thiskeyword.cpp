#include<iostream>
class operation {
private:
	int num1 = 22, num2 = 33;
public:
	void getdata(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	}
	void display() {
		std::cout << "\nnum1=" << num1 << "\nnum2=" << num2;
	}
};
int main() {
	operation o1;
	o1.getdata(3,4);
	o1.display();
	return 0;
}