#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

const int MOD = 1000000007;

// DP テーブル
vector<int64_t> dp(100010);

int main() {
    int N, M, anum;
    cin >> N >> M;
    vector<int64_t> a(M+10);
    vector<bool> h(N+1, true);  
    rep(i, 0, M) {
        cin >> anum;
        a.at(i) = anum;
        h.at(anum) = false;
    }
    
    rep(i, 0, N+1) dp.at(i) = 0;
    
    dp.at(0) = 1;
    if(h.at(1)) dp.at(1) = 1;

    rep(i, 2, N+1){
        if(!h.at(i)){
            dp.at(i) = 0;
        }else{
            dp.at(i) = dp.at(i-1) + dp.at(i-2);
            dp.at(i) %= MOD;
        }
    }
    cout << dp.at(N) << endl;
}