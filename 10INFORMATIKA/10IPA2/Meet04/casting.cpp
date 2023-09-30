#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a = 2.17, b = 3.89;
    cout << "round : " << round(a) << " " << round(b) << endl;
    cout << "floor : " << floor(a) << " " << floor(b) << endl;
    cout << "(int) : " << (int)(a) << " " << (int)(b) << endl; 
    return 0;
}