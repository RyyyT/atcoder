#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

using pll = pair<long long, long long>;

int main() {
    int N;
    cin >> N;
    vector<pll> v(N);
    rep(i, 0, N) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), [&](pll a, pll b){return a.second < b.second;});

    bool can = true;
    long long time = 0;
    rep(i, 0, N){
        time += v[i].first;
        if(time > v[i].second) {
            can = false;
            break;
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}