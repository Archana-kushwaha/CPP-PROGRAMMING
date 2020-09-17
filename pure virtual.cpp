#include<iostream>
class pet {
public:
	virtual void speak() const = 0;
	virtual void eat() const = 0;
	//virtual void sleep() const = 0 {};
};
void pet::eat() const {
	std::cout << "pet::eat()" << std::endl;
}
void pet::speak() const {
	std::cout << "pet::speak()" << std::endl;
}
class dog :public pet {
public:
	void eat() const {
		std::cout << "pet::eat()" << std::endl;
	}
	void speak() const {
		std::cout << "pet::speak()" << std::endl;
	}
};
int main() {
	dog bruno;
	bruno.speak();
	bruno.eat();
}
