#include <iostream>

int a = 4, b = 5;

void swap()
{
    a += b;
    b = a - b;
    a -= b;
}

int main()
{
    std::cout << a << " " << b << std::endl;
    swap();
    std::cout << a << " " << b << std::endl;
    return 0;
}