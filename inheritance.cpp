#include <iostream> 
class Parent
{
public:
    int parentAge;
};
class Child : public Parent
{
public:
    int childAge;
};
int main()
{
    Child obj1; 
    obj1.parentAge = 40;
    obj1.childAge = 10;
    std::cout << "Parent Age is " << obj1.parentAge <<std:: endl;
    std::cout << "Child Age  is " << obj1.childAge <<std:: endl;
    return 0;
}

