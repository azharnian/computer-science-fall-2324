#include <iostream>
using namespace std;

int main(){
    double score;
    cin >> score;

    if (score >= 90 && score <= 100)
        cout << "A\n";
    else if (score >= 80 && score < 90)
        cout << "B\n";
    else if (score >= 70 && score < 80)
        cout << "C\n";
    else cout << "D\n";
    return 0;
}