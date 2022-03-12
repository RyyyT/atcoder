#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> a(N), b(N);
    rep(i, 0, N) cin >> a[i];
    rep(i, 0, N) cin >> b[i];

    int count1 = 0, count_all = 0;
    rep(i, 0, N){
        rep(j, 0, N){
            if(a[i] == b[j]) count_all++;
        }
    }
    rep(i, 0, N){
        if(a[i] == b[i]) count1++;
    }
    int count2 = count_all - count1;
    cout << count1 << endl << count2 << endl;
    return 0;
}