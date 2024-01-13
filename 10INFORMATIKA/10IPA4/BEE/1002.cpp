#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Input
    double R;
    cin >> R;

    // Output
    double A = 3.14159 * R * R;
    cout << fixed << setprecision(4) << "A=" << A;
    return 0;
}