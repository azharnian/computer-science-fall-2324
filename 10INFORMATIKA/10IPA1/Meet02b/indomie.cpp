#include <iostream>
using namespace std;

int main(){
    int money, price;
    cout << "Berapa banyak uang yang kamu miliki ? ";
    cin >> money;
    cout << "Harga satu indomie saat ini berapa ? ";
    cin >> price;
    cout << "Kamu akan memperoleh mie sebanyak : " << money / price << endl;
    cout << "Uang kembaliannya adalah : " << money % price << endl;
    return 0;
}