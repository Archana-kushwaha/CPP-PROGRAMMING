#include <iostream>
enum Season
{
    Summer,
    Spring,
    Winter,
    Autumn
};
enum Color {
    Blue,
    Pink,
    Green
};
int main()
{
    Season s = Summer;
    Color c = Blue;
    if (s == c)
    {
        std::cout << "Equal" << std::endl;
    }
    else
    {
        std::cout << "Not Equal" << std::endl;
    }
    return 0;
}