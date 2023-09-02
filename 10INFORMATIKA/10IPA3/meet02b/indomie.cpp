#include <iostream>
using namespace std;

int main(){
    int money, price;
    cout << "Punya uang berapa ? ";
    cin >> money;
    cout << "Harga satu mi berapa ? ";
    cin >> price;
    cout << "Kamu akan mendapatkan " << money / price << " mie\n";
    cout << "Kembalian dari uang kamu sebanyak " << money % price << endl;
    return 0;
}