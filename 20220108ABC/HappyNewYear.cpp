#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    long long K;
    cin >> K;
    string ans = "";
    while(K > 1){
        if(K%2 == 1){
            ans = "2" + ans;
            K = K/2;
        }else{
            ans = "0" + ans;
            K = K/2;
        }
    }
    if(K == 1) {
        ans = "2" + ans;
        cout << ans << endl;
    }else{
        cout << ans << endl;
    }
}
