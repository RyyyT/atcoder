#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int64_t N;
    cin >> N;
    int64_t upper=1, lower;
    rep(i, 0, 31){
        upper *= 2;
    }
    lower = -upper;
    if(N < lower || upper <= N){
        cout  << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}