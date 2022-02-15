#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int64_t n_1=2, n_2=1, ans;
    if(N==0) ans = 2;
    else if(N==1) ans = 1;
    else {
        for(int i=0; i<N-1; i++){
            ans = n_1 +  n_2;
            n_1 = n_2;
            n_2 = ans;
        }
    }
    cout << ans << endl;
}
