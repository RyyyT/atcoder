#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(N+1), c(N+M+1);

    rep(i, 0, N+1) cin >> a[i];
    rep(i, 0, N+M+1) cin >> c[i];

    vector<int> b(M+1);
    vector<int> buffer(N);

    rep(i, 0, M+1){
        b[i] = c[N+M-i] / a[N];
        for(int j = N-1; j>=0; j--){
            buffer[j] = b[i] * a[j];
        }
        rep(j, 1, N){
            c[N+M-i-j] = c[N+M-i-j] - buffer[N-j];
        }
    }

    for(int i=M; i>=0; i--){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}