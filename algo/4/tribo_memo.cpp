#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

vector<int> memo;

int tribonach(int n){
    if(n == 0) return 0;
    if(n == 1) return 0;
    if(n == 2) return 1;

    if(memo[n] != -1){
        return memo[n];
    }else{
        return memo[n] = tribonach(n-1) + tribonach(n-2) + tribonach(n-3);
    }
}

int main() {
    int N; 
    cin >> N;
    memo = vector<int>(N+1, -1);
    cout << tribonach(N) << endl;
    return 0;
}