#include <iostream>
using namespace std;

int main(){
    long N;
    cin >> N;
    if (N > 0){
        cout << "Positif\n";
    } else if (N < 0){
        cout << "Negatif\n";
    } else if (N == 0){
        cout << "Nol\n";
    }
    return 0;
}