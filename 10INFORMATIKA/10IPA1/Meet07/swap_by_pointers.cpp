#include <iostream>

void swap(int *a, int *b)
{
    std::cout << &a << " " << &b << std::endl;
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

int main()
{
    int a = 4, b = 5;
    std::cout << &a << " " << &b << std::endl;
    std::cout << a << " " << b << std::endl;
    swap(&a, &b);
    std::cout << a << " " << b << std::endl;
}