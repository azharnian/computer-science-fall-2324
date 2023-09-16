#include <iostream>
#include <vector>
using namespace std;

int find_fpb(int n, int m){
    if (n < m){
        m += n;
        n = m - n;
        m -= n;
    }
    int res = n % m;
    if (res > 0)
        return find_fpb(m, res);
    return m;
}

int main(){
    int X, N, M, fpb;
    vector<int> N_arr, M_arr;
    cin >> X;
    for (int i = 0; i < X; i++){
        cin >> N >> M;
        fpb = find_fpb(N, M);
        N_arr.push_back(N / fpb);
        M_arr.push_back(M / fpb );
    }
    for (int i = 0; i < X; i++){
        cout << N_arr[i] << " " << M_arr[i] << endl;
    }  
    return 0;
}