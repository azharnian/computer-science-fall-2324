#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int alas, tinggi;
    cin >> alas >> tinggi;
    float res = (alas * tinggi) /  2.0;
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}