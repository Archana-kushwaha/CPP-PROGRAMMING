//file1
#include<iostream>
#include<string>
const std::string Message = "Morning";
const std:: string Message1 ()
{
	return "Morning";
}
int main() {
	const auto function1 = Message1();
	decltype (Message1()) function2 = Message1();
	decltype (auto) function3 = Message1();
	std::cout << function3<< std::endl;
	std::cin.get();
}
