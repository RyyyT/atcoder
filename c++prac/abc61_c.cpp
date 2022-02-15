#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    int N = s.size();
    int64_t ans=0;
    for(int i=0; i < (1<<(N-1)); i++){
        int64_t sm = 0;
        int64_t a = s.at(0) - '0';
        for(int j=0; j<(N-1); j++){
            if(i & (1 << j)){
                sm += a;
                a = s.at(j+1) - '0';
            }else{
                a = a*10 + s.at(j+1) - '0';
            }
        }
        sm += a;
        ans += sm;
    }
    cout << ans << endl;
}
