#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N_true, a=0;
    int digit;
    cin >> N_true;
    int N = N_true;
    while(N >= 10){
        digit = N % 10;
        a += digit;
        N = N / 10;
    }
    a += N;
    if(N_true%a == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
