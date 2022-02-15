#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    string s;
    int a, b;
    cin >> s;
    cin >> a >> b;
    rep(i, 0, s.length()){
        if(i == a - 1) cout << s.at(b - 1);
        else if(i == b - 1) cout << s.at(a - 1);
        else cout << s.at(i);
    }
}
