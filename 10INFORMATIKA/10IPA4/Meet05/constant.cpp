// Program ini dibuat oleh Baim
#include <iostream>
using namespace std;

int main(){
    // Menginisiasi variable konstan PI = 3.14159
    const double PI = 3.14159;
    // PI = 10;
    // Mendeklarasikan varible r (radius)
    double r;
    // Meminta nilai radius
    cin >> r;
    // Menampilkan dan menghitung Luas lingkaran
    cout << PI * r * r << endl;
    return 0;
}