#include <iostream>
using namespace std;

int main(){
    long number;
    cin >> number;
    if (number == 0)
        cout << "Nol\n";
    else if (number % 2 == 0){
        if (number > 0)
            cout << "Genap Positif\n";
        else cout << "Genap Negatif\n";
    } else {
        if (number > 0)
            cout << "Ganjil Positif\n";
        else cout << "Ganjil Negatif\n";
    }
    return 0;
}