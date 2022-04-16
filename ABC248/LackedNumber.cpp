#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    vector<int> a(10);
    rep(i, 0, 9){
        a[s[i] - '0'] = 1;
    }
    rep(i, 0, 10){
        if(a[i] == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}