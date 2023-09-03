#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "What's your name ? ";
    getline(cin, name);
    cout << "Hi " << name << endl;
    int age;
    cout << "How old are you ? ";
    cin >> age;
    if (age < 30){
    	cout << "Masih muda sekali\n";
	} else {
		cout << "Sudah tua\n";
	}
    return 0;
}
