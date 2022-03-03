#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int64_t INF = 1LL << 60;

// DP テーブル
vector<int64_t> dp(100010);

int main() {
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i, 0, N) cin >> p[i];
    int m = 0;
    rep(i, 0, N) m += p[i];
    vector<vector<bool>> dp(N+1, vector<bool>(m+1, false));
    dp[0][0] = true;
    rep(i, 1, N+1){
        rep(j, 0, m+1){
            if(dp[i-1][j]){
                dp[i][j] = true;
                dp[i][j+p[i-1]] = true;
            }
        }
    }

    int cnt = 0;
    rep(i, 0, m+1){
        if(dp[N][i]) cnt++;
    }
    cout << cnt << endl;
}