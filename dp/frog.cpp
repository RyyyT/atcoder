#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int64_t INF = 1LL << 60;

int main() {
    int N;
    cin >> N;
    vector<int64_t> h(N);
    vector<int64_t> dp(N);
    rep(i, 0, N) cin >> h.at(i);

    rep(i, 0, N) dp.at(i) = INF;
    dp.at(0) = 0;
    dp.at(1) = abs(h.at(1) - h.at(0));

    rep(i, 2, N){
        chmin(dp.at(i), dp.at(i-1) + abs(h.at(i) - h.at(i-1)));
        chmin(dp.at(i), dp.at(i-2)+abs(h.at(i) - h.at(i-2)));
    }    

    cout << dp.at(N-1) << endl;
    return 0;
}