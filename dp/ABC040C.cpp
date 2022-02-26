#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int64_t INF = 1LL << 60;


int main() {
    int N;
    cin >> N;
    vector<int64_t> a(N+2);
    vector<int64_t> dp(N+2);
    rep(i, 0, N) {
        cin >> a.at(i);
        dp.at(i) = INF;
    }

    dp.at(0) = 0;

    rep(i, 0, N){
        chmin(dp.at(i+1), dp.at(i) + abs(a.at(i+1) - a.at(i)));
        chmin(dp.at(i+2), dp.at(i) + abs(a.at(i+2) - a.at(i)));
    }

    cout << dp.at(N-1) << endl;
}