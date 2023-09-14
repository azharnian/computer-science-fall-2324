#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int alas, tinggi;
    cin >> alas >> tinggi;
    cout << fixed << setprecision(2) << alas * tinggi / 2.0 << endl;
}