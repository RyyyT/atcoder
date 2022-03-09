#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, 0, N) cin >> a[i];

    auto b = a;
    sort(b.begin(), b.end());

    vector<int> rank(N);
    rep(i, 0, N){
        int d = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        rank[i] = d;
    }

    rep(i, 0, N) cout << rank[i] << " " << endl;
    return 0;
}