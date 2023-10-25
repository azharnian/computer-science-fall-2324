// created by Anas 23 Oct 2023
#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.14159;
int main(){
    // inisiasi variable
    double area, radius;
    // input radius
    cin >> radius;
    // menghitung luas lingkaran
    area = PI * radius * radius;
    // menampilkan hasil
    cout << fixed << setprecision(2) << "area is " << area << endl;
    return 0;
}