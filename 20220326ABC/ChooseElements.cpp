#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    long long N, K;
    cin >> N >> K;
    vector<long long> a(N), b(N);
    rep(i, 0, N) cin >> a[i];
    rep(i, 0, N) cin >> b[i];

    bool can = true;
    vector<long long> ok(2);
    ok[0] = a[0]; ok[1] = b[0];
    for(int i = 1; i<=N-1; i++){
        if(ok[0] == -1 && ok[1] == -1){ 
            can = false;
            break;
        }
        if(ok[0] == -1){
            if(abs(a[i] - ok[1]) <= K) ok[0] = a[i];
            else ok[0] = -1;

            if(abs(b[i] - ok[1]) <= K) ok[1] = b[i];
            else ok[1] = -1;            
        }else if(ok[1] == -1){
            if(abs(a[i] - ok[0]) <= K) ok[0] = a[i];
            else ok[0] = -1;

            if(abs(b[i] - ok[0]) <= K) ok[1] = b[i];
            else ok[1] = -1;   
        }else{
            if(abs(a[i] - ok[0]) <= K || abs(a[i] - ok[1]) <= K) ok[0] = a[i];
            else ok[0] = -1;    

            if(abs(b[i] - ok[0]) <= K || abs(b[i] - ok[1]) <= K) ok[1] = b[i];
            else ok[1] = -1;            
        }
    }

    if(ok[0] == -1 && ok[1] == -1){
        can = false;
    }

    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}