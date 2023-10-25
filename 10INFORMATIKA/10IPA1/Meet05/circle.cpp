#include <iostream>
using namespace std;

double find_area(double r){
    double result;
    result = 3.14159 * r * r;
    return result;
}

double find_perimeter(double r){
    return 3.14159 * 2 * r;
}

int main(){
    int radius;
    cin >> radius;
    cout << "area : " << find_area(radius) << endl;
    cout << "perimeter : " << find_perimeter(radius) << endl;
    return 0;
}