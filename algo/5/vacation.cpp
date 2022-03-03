#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int64_t INF = 1LL << 60;


int main() {
    int N;
    cin >> N;
    vector<int> a(N), b(N), c(N);
    rep(i, 0, N){
        cin >> a[i] >> b[i] >> c[i];
    }

    vector<vector<int>> dp(N+1, vector<int>(3, 0));
    dp[1][0] = a[0]; dp[1][1] = b[0]; dp[1][2] = c[0];

    rep(i, 2, N+1){
        rep(j, 0, 3){
            if(j == 0){
                chmax(dp[i][j], dp[i-1][1] + a[i-1]);
                chmax(dp[i][j], dp[i-1][2] + a[i-1]);
            }else if(j == 1){
                chmax(dp[i][j], dp[i-1][0] + b[i-1]);
                chmax(dp[i][j], dp[i-1][2] + b[i-1]);
            }else{
                chmax(dp[i][j], dp[i-1][1] + c[i-1]);
                chmax(dp[i][j], dp[i-1][0] + c[i-1]);
            }
        }
    }
    int ans = 0;
    rep(i, 0, 3) chmax(ans, dp[N][i]);
    cout << ans << endl;
}