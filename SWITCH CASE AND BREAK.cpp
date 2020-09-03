#include <iostream>
int main() {
    int choice;
     std::cout << "\n0 string";
     std::cout << "\n1 string1";
     std::cout << "\n2 string2";
     std::cout << "\n3 string3";
     std::cin >> choice;
        switch (choice) {
        case 0:
           std:: cout << "hello world*";
            break;
        case 1:
            std::cout << "world hello";
            break;
        case 2:
           std:: cout<<"hello hello world";
            break;
        case 3:
          std:: cout << "world woorld";
            break;
        default:
           std:: cout << "Error! Invalid choice";
            break;
        }

        return 0;
    }
  