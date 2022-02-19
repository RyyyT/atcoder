#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int64_t X;
    cin >> X;
    if(X > 0){
        cout << X/(int64_t)10 << endl;
    }else{
        if(X%10 != 0) cout << X/(int64_t)10 - (int64_t)1 << endl;
        else cout << X/(int64_t)10 << endl;
    }
    return 0;
}