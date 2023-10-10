#include <iostream>
using namespace std;

int main(){
    double score;
    cin >> score;
    if (score >= 0 && score <= 100){
        if (score >= 90)
            cout << "A\n";
        else if (score >= 80)
            cout << "B\n";
        else if (score >= 70)
            cout << "C\n";
        else cout << "D\n";
    }
    return 0;
}