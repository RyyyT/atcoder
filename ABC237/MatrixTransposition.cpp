#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> a(H, vector<int>(W));
    rep(i, 0, H){
        rep(j, 0, W){
            cin >> a.at(i).at(j);
        }
    }
    rep(j, 0, W){
        rep(i, 0, H){
            cout << a.at(i).at(j) << " ";
        }
        cout << endl;
    }
    return 0;
}