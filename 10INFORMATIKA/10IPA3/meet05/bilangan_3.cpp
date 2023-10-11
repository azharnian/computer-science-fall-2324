#include <iostream>
using namespace std;

int main(){
    long N;
    cin >> N;
    if (N == 0)
        cout << "NOL\n";
    else if (N % 2 == 0)
        if (N > 0)
            cout << "Genap Positif\n";
        else 
            cout << "Genap Negatif\n";
    else
        if (N > 0)
            cout << "Ganjil Positif\n";
        else 
            cout << "Ganjil Negatif\n";
    return 0;
}