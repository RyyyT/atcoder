#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int64_t> a(N), b(N), c(N);
    rep(i, 0, N) cin >> a[i];
    rep(i, 0, N) cin >> b[i];
    rep(i, 0, N) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int64_t count = 0;
    rep(i, 0, N){
        int64_t bm = b[i];
        int64_t ac = lower_bound(a.begin(), a.end(), bm) - a.begin();
        int64_t cc = c.end() - upper_bound(c.begin(), c.end(), bm);
        count += ac*cc;
    }
    cout << count << endl;
    return 0;
}