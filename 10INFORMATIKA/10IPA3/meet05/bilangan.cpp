#include <iostream>
using namespace std;

int main(){
    long N;
    if (N > 0){
        cout << N << " bilangan positif\n";
    } else if (N < 0){
        cout << N << " bilangan negatif\n";
    } else {
        cout << "bilangan nol\n";
    }
    return 0;
}