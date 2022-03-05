#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

#define MOD 998244353

int main() {
    int N;
    cin >> N;
    vector<vector<int>> dp(N+1, vector<int>(10, 0));
    rep(i, 1, 10) {
        if(i == 1 || i == 9){
            dp[2][i] = 2;
        }else{
            dp[2][i] = 3;
        }
    }

    rep(i, 3, N+1){
        rep(j, 1, 10){
            if(j == 1){
                dp[i][j] = dp[i-1][j];
                dp[i][j] += dp[i-1][j+1];
                dp[i][j] %= MOD;
            }else if(j == 9){
                dp[i][j] = dp[i-1][j-1];
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= MOD;                
            }else{
                dp[i][j] = dp[i-1][j-1];
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= MOD;
                dp[i][j] += dp[i-1][j+1];
                dp[i][j] %= MOD;                
            }            
        }
    }

    int ans = 0;
    rep(i, 1, 10){
        ans += dp[N][i];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}