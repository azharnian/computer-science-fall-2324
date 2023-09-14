#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	cout << 5 / 2 << endl;
	
	cout << 5.0 / 2 << endl
		 << 5 / 2.0 << endl
		 << 5.0 / 2.0 << endl;
		 
	float number = 2.51;
	cout << round(number) << endl;
	
	float pi = 3.14159;
	cout << fixed << setprecision(2) << pi << endl;
	return 0;
}
