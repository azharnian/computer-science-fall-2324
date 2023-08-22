#include <iostream>
#include <string>
#include <chrono>
using namespace std;

int main(){
    // auto number = 0;
    // auto name = "Anas";
    // std::cout << number + 3 << name << std::endl;
    auto now = chrono::system_clock::now();
    string year = to_string(100);
    cout << year << endl;
    return 0;
}