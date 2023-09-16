#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector <int>> res;

vector<int> counterValue(long init, long final){
    vector<int> result;
    int number_arr[10] = {0,0,0,0,0,0,0,0,0,0};
    for (long i = init; i < final+1; i++){
        string str_number = to_string(i);
        for (char item : str_number){
            int number = item - '0';
            number_arr[number]++;
        }
    }
    for (int number : number_arr){
        // cout  << number << " ";
        result.push_back(number);
    }
    return result;
}

void printAllResult(vector<vector <int>> vectors){
    for (vector<int> vector : res){
        for (int number : vector){
            cout << number << " ";
        }
        cout << endl;
    }
}

int main(){
    long init = -1, final = -1;
    while (true){
        cin >> init >> final;
        if (init == 0 && final == 0)
            break;
        res.push_back(counterValue(init, final));
    }
    printAllResult(res);
    return 0;
}