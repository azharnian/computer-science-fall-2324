// Program ini dibuat oleh : Alexander (2023-10-18)
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Inisiasi variable konstan untuk nilai PI
    const double PI = 3.14159;
    double radius;
    // Input nilai jari-jari (radius lingkaran)
    cin >> radius;
    // Menghitung dan mencetak nilai luas lingkaran
    cout << fixed << setprecision(3) << (PI * radius * radius) << endl; 
    return 0;
}