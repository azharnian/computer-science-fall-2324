#include <iostream>
using namespace std;

int main(){
    long N;
    cin >> N;
    if (N % 2 == 0 && N > 0){
        cout << "Genap Positif\n";
    } else if (N % 2 == 0 && N < 0){
        cout << "Genap Negatif\n";
    } else if (N % 2 != 0 && N > 0){
        cout << "Ganjil Positif\n";
    } else if (N % 2 != 0 && N < 0){
        cout << "Ganjil Negatif\n";
    } else {
        cout << "Nol\n";
    }
    return 0;
}