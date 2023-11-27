#include <iostream>
#include <vector>

std::vector<int> swap(int a, int b)
{
    std::vector<int> result;
    // result = {b , a};
    result.push_back(b);
    result.push_back(a);
    return result;
}

int main()
{
    int a = 4, b = 5;
    std::cout << a << " " << b << std::endl;
    std::vector<int> res = swap(a, b);
    std::cout << res[0] << " " << res[1] << std::endl;
    return 0;
}