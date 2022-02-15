#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    int count=0;
    rep(i, 0, s.length()){
        if(s.at(i) == '1') count++;
    }
    cout << count << endl;
    return 0;
}