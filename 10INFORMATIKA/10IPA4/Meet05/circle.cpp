#include <iostream>
using namespace std;

double find_area(double r)
{
    double result;
    result = 3.14159 * r * r;
    return result;
}

double find_perimeter(double r)
{
    return 3.14159 * r * 2;
}

int main(){
    cout << find_area(10) << endl;
    cout << find_area(20) << endl;
    cout << find_perimeter(10) << endl;
    cout << find_perimeter(20) << endl;
    return 0;
}