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
    vector<int> wsum(H, 0);
    vector<int> hsum(W, 0);
    rep(i, 0, H){
        int sum=0;
        rep(j, 0, W){
            sum += a.at(i).at(j);
        }
        wsum.at(i) = sum;
    }
    rep(i, 0, W){
        int sum=0;
        rep(j, 0, H){
            sum += a.at(j).at(i);
        }
        hsum.at(i) = sum;
    }
    rep(i, 0, H){
        rep(j, 0, W){
            int ans;
            ans = wsum.at(i) + hsum.at(j) - a.at(i).at(j);
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}