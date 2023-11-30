#include <iostream>

void print_arr(int s, int *ar)
{
    std::cout << *ar << std::endl;
    std::cout << ar << std::endl;
    // std::cout << *ar[0] << std::endl;
    std::cout << ar[0] << std::endl;
    std::cout << ar[1] << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);
    // print_arr(size, arr);
    print_arr(size, &arr[0]);
}