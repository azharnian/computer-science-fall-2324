#include <iostream>
using namespace std;

int main(){
    string cars[] = {"toyota", "audi", "mazda", "honda", "hyundai"};
    for (string car : cars)
    {
        cout << car << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << cars[i] << endl;
    }
    return 0;
}