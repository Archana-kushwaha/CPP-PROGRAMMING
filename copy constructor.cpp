#include<iostream>
class complex {
private:
	int val1=5, val2=8;
public:
	complex(){} //default constructor,constructor with no arguments
	complex(int x) {  //parameterized constructor for one argument
		val1 = x;
		val2 = x;
	}
	complex(int x,int y) {  //parameterized constructor for two argument
		val1 = x;
		val2 = y;
	}
	complex(complex& c) { //copy constructor
		val1 = c.val2;
		val2 = c.val1;
	}
	void getdata();
};
void complex::getdata() {
	std::cout << val1 << std::endl;
	std::cout << val2 << std::endl;
}
int main() {
	complex c1 = 3;//constructor with one argument is called
	complex c2(3,4);//constructor with two argument is called
	complex c3;// default constructor  is called
	complex c4=c2;// copy constructor  is called
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	return 0;
}