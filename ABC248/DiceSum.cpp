#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define MOD 998244353

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<long long>> dp(n+1, vector<long long>(n*m+1));
    for(int i = 1; i <= n*m; i++){
        if(1 <= i && i <= m) dp[1][i] = 1;
        else dp[1][i] = 0;
    }

    for(int N = 2; N <= n; N++){
        for(int sum = N; sum <= m*N; sum++){
            long long s = 0;
            for(int j = 0; j<m; j++){
                int index = sum - 1 - j;
                if(index < 0) break;
                s += dp[N-1][index];
                s %= MOD;
            }
            dp[N][sum] = s;
        }
    }

    long long ans = 0;
    for(int i = 0; i <= k; i++){
        ans += dp[n][i];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}