#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, 0, N) cin >> a[i];

    sort(a.begin(), a.end());
    int ans = 0;
    rep(i, 0, N){
        if(a[i] == ans) ans++;
    }
    cout << ans << endl;
    return 0;
}