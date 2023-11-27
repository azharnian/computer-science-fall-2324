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
    float input;
    int money, n;
    scanf("%f", &input);
    money = (int) (input * 100);
    vector<float> banknotes = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
    vector<int> result;
    for (float banknote : banknotes)
    {
        n = money / (int)(banknote*100);
        result.push_back(n);
        money %= (int)(banknote*100);
    }
    print_vector(result);
    return 0;
}