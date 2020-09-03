#include<iostream>
int main(){
    int year=1993;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
       std:: cout << year << " is a leap year";
    }
    else
    {
       std:: cout << year << " is not a leap year";
    }
    return 0;
}