#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &N)
{
    // for (int i = 0, len = N.size(); i < len; i++)
    // {
    //     printf("%d ", N[i]);
    // }
    for (int n : N)
    {
        printf("%d ", n);
    }
    printf("\n");
}

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5, 6};
    print_vector(numbers);
    return 0;
}