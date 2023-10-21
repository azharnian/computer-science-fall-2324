#include <iostream>
#include <string>
using namespace std;

int main() {
    long serialNumber;
    int multiple;
    string serialString;
    while (serialString.length() != 16){
        cout << "Number : ";
        cin >> serialNumber;
        serialString = to_string(serialNumber);
    }
    int total = 0;
    for (int i = 0; i < serialString.length(); i++){
        if (i % 2 == 0){
            multiple = (int)(serialString[i] - '0')*2;
            if (multiple > 9){
                // for (char charNumber : to_string(multiple)){
                //     total += (int)(charNumber - '0');
                // }
                total += multiple / 10; //tenth
                total += multiple % 10; //oneth

            } else {
                total += multiple;
            }
        } else {
            total += (int)(serialString[i] - '0');
        }
    }
    if (total % 10 == 0)
        cout << "VISA" << endl;
    else
        cout <<"INVALID" << endl;

    return 0;
}
