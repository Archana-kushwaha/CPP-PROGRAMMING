#include<iostream>
void MyName(const std::string& name) {
	std::cout <<"[lvaue]"<< name << std::endl;
}
void MyName(std::string&& name) {
	std::cout<< "[rvale]" << name << std::endl;
}
int main() {
	std::string firstname = "Archana";
	std::string lastname = "Kushwaha";
	std::string fullname = firstname + lastname;
	MyName(fullname);
	MyName(firstname + lastname);
}