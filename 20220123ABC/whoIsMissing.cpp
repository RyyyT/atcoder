#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N, a;
    cin >> N;
    vector<int> exist(N);
    vector<int> cards(4 * N - 1);
    rep(i, 0, 4*N-1){
        cin >> a;
        cards.at(i) = a;
        exist.at(a - 1) ++;
    }
    rep(i, 0, N){
        if(exist.at(i) == 3) cout << i+1 << endl;
    }
}
