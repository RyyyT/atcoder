#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    vector<int> already(N + 1, 0);
    rep(i, 0, N){
        cin >> P.at(i);
    }
    int minimum = N;
    rep(i, 0, K){
        if(P.at(i) < minimum) minimum = P.at(i);
        already.at(P.at(i)) = 1;
    }
    cout << minimum << endl;
    rep(i, K, N){
        already.at(P.at(i)) = 1;
        if(P.at(i) < minimum) {
            cout << minimum << endl;
            continue;
        }else{
            rep(j, minimum+1, N+1){
                if(already.at(j) == 1){
                    minimum = j;
                    break;
                }
            }
            cout << minimum << endl;
        }
    }
}
