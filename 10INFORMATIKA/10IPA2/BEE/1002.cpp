#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // input
    double R;
    cin >> R;

    // output
    double A = 3.14159 * R * R;
    cout << fixed << setprecision(4) << "A=" << A;
    return 0;
}