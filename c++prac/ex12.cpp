#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    int x = 1;
    rep(i, 0, S.size()){
        if(i%2 != 0){
            if(S.at(i) == '+') x += 1;
            else x -= 1;
        }
    }
    cout << x << endl;
}
