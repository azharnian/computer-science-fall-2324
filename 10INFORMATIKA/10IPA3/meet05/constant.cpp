// Program ini dibuat oleh Anton 1 Nov 2023
#include <iostream>
using namespace std;

int main(){
    // Membuat variable PI
    const double PI = 3.14159;
    // Menginisiasi variable radius bertipe double
    double radius;
    // Meminta nilai dari radius
    cin >> radius;
    // Menampilkan dan menghitung luas lingkaran
    cout << PI * radius * radius << endl;
    return 0;
}