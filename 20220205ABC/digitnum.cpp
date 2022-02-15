#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

const int MOD = 998244353;
const int gyaku = 499122177;

long long f(long long num, int m){
    long long tenm = 1;
    rep(i, 0, m){
        tenm *= 10;
    }
    return (num - tenm + 1);
}

long long tentime(int m){
    long long ans = 1;
    rep(i, 0, m){
        ans *= 10;
    }
    return ans;
}

int main() {
    long long N, ten = 10, ans = 0;
    cin >> N;
    int m = 0;
    rep(i, 0, 19){
        if(N / ten  != 0){
            ten *= 10;
            m++;
        }else{
            break;
        }
    }
    long long a = 0;
    if(m == 0){
        ans = (1 + N) * N /2;
    }else{
        rep(i, 0, m){
            a = 1 + f(tentime(i+1)-1, i);
            a = a % MOD;
            a = a * (f(tentime(i+1)-1, i) % MOD);
            a %= MOD;
            a = a * gyaku % MOD;
            ans += a;
            ans %= MOD;
        }

        long long fn, t;
        fn = N - tentime(m) + 1;
        t = (1 + fn) % MOD;
        t = t * (fn % MOD);
        t %= MOD;
        t = t * gyaku % MOD;
        ans += t;
        ans %= MOD; 
    }
    cout << ans << endl;
}
