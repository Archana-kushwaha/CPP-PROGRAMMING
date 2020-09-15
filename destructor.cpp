#include <iostream>
class next{
public:
    next() //constructor defined
    {
       std:: cout << " constructor" <<std:: endl;
    }
    ~next() //destructor defined
    {
       std:: cout << "destructor" <<std:: endl;
    }
};

int main()
{
    next obj1; //constructor is called
    std::cout << "function main is terminating" <<std:: endl;
    //object obj1 goes out of scope ,now destructor is being called
    return 0;
}  