#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    if (N % 2 == 0 && N > 0){
        cout << "Genap Positif\n";
    } else if (N % 2 == 0 && N < 0){
        cout << "Genap Negatif\n";
    }
    return 0;
}