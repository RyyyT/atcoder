#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    int l_i, r_i;
    int total = 0;
    cin >> N;
    rep(i, 0, N){
        cin >> l_i >> r_i;
        total += r_i - l_i + 1;
    }
    cout << total << endl;
}
