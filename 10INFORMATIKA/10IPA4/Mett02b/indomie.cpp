#include <iostream>
using namespace std;

int main(){
    int money, price;
    cout << "Berapa banyak uang yang kamu miliki ? ";
    cin >> money;
    cout << "Berapa harga satu bungkus indomie ? ";
    cin >> price;
    cout << "Kamu akan mendapatkan " << money / price << " indomie\n";
    cout << "Kembalian uang kamu sebanyak " << money % price << endl;
    return 0;
}