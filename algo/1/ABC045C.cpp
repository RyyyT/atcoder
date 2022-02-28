#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    int l = s.length();
    int64_t ans = 0;
    rep(i, 0, 1 << (l-1)){
        int64_t sum = 0; int64_t tmp = s[0] - '0';
        rep(j, 0, l-1){
            if(i & (1 << j)){
                sum += tmp;
                tmp = s[j+1] - '0';
            }else{
                tmp *= 10;
                tmp += s[j+1] - '0';
            }
        }
        sum += tmp;
        ans += sum;
    }
    cout << ans << endl;
    return 0;
}