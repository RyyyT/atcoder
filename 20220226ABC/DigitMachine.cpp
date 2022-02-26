#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    vector<int> a(10);
    rep(i, 0, 10) cin >> a.at(i);
    int answer = 0, button = a.at(answer);
    rep(i, 0, 2){
        answer = a.at(button);
        button = answer;
    }
    cout << answer << endl;
    return 0;
}