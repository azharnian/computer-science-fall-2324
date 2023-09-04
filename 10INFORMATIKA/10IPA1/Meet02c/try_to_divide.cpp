#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << 5 /2 << endl;
    cout << 5.0 / 2 << "\n"
         << 5 / 2.0 << "\n"
         << 5.0 / 2.0 << "\n";

    float number = 2.51;
    cout << round(number) << endl;

    float precise_number = 3.14159;
    cout << round(precise_number) << endl;
    cout << fixed << setprecision(2) << precise_number << endl;
    cout << fixed << setprecision(3) << precise_number << endl;
    return 0;
}