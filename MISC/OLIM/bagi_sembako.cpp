#include <iostream>
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
    int N, M, fpb;
    cin >> N >> M;
    fpb = find_fpb(N, M);
    cout << N / fpb << " " << M / fpb << endl;
    return 0;
}