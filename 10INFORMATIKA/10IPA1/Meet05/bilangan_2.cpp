#include <iostream>
using namespace std;

int main(){
    long number;
    cin >> number;
    if (number % 2 == 0 && number > 0){
        cout << "Genap Positif\n";
    } else if (number % 2 == 0 && number < 0){
        cout << "Genap Negatif\n";
    } else if (number % 2 != 0 && number > 0){
        cout << "Ganjil Positif\n";
    } else if (number % 2 != 0 && number < 0){
        cout << "Ganjil Negatif\n";
    } else {
        cout << "Nol\n";
    }
    return 0;
}