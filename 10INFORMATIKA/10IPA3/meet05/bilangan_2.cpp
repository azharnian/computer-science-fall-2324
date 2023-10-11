#include <iostream>
using namespace std;

int main(){
    long N;
    cin >> N;
    if (N == 0){
        cout << "NOL\n";
    } else if (N % 2 == 0 && N > 0){
        cout << "GENAP POSITIF\n";
    } else if (N % 2 == 0 && N < 0){
        cout << "GENAP NEGATIF\n";
    } else if (N % 2 != 0 && N > 0){
        cout << "GANJIL POSITIF\n";
    } else {
        cout << "GANJIL NEGATIF\n";
    }
    return 0;
}