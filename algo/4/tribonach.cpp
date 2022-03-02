#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int tribonach(int n){
    if(n == 0) return 0;
    if(n == 1) return 0;
    if(n == 2) return 1;

    return tribonach(n-1) + tribonach(n-2) + tribonach(n-3);
}

int main() {
    int N; 
    cin >> N;
    cout << tribonach(N) << endl;
    return 0;
}