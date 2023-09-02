#include <iostream>
using namespace std;

int main(){
    int money, price;
    cout << "Kamu punya uang berapa ? ";
    cin >> money;
    cout << "Harga indomie 1 bungkus berapa ? ";
    cin >> price;
    cout << "Kamu akan mendapatkan " << money / price << "mie\n";
    cout << "dan kembaliannya sebanyak " << money % price << endl;
    return 0;
}