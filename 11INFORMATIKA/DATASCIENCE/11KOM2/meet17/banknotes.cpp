#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &vect){
    for (int item : vect)
    {
        printf("%d ", item);
    }
    printf("\n");
}

int main(){
    int money, n;
    scanf("%d", &money);
    vector<int> banknotes = {100, 50, 20, 10, 5, 2, 1}, result;
    for (int banknote : banknotes)
    {
        n = money / banknote;
        result.push_back(n);
        money %= banknote;
    }
    print_vector(result);
    return 0;
}