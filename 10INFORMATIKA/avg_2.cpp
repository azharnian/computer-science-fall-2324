#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 20> scores = {50, 60, 70, 80, 90, 50, 60, 70, 80, 90,
    50, 60, 70, 80, 90, 50, 60, 70, 80, 90};

    cout << scores.size() << endl;
    return 0;
}