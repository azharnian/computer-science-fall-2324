#include <iostream>
#include <cmath>
using namespace std;

double find_area(double base, double height){
    return base * height / 2.0;
}

double find_perimeter(double base, double height){
    double c = sqrt(base * base + height * height);
    return base + height + c;
}

int main(){
    double a, b; // alas dan tinggi
    cin  >> a >> b;
    cout << find_area(a, b) << endl;
    cout << find_perimeter(a, b) << endl;
    return 0;
}