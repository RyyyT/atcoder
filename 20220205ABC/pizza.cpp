#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N, gross = 0;
    cin >> N;
    vector<int> a(N, 0);
    vector<int> cut(N+1, 0);
    rep(i, 0, N){
        cin >> a.at(i);
    }
    rep(i, 0, N){
        cut.at(i) = gross;
        gross += a.at(i);
        gross = gross%360;
    }
    cut.at(N) = gross;

    sort(cut.begin(), cut.end());

    cut.push_back(360);
    int degree, max_degree = 0;
    rep(i, 0, N+1){
        degree = cut.at(i+1) - cut.at(i);
        if(degree > max_degree) max_degree = degree;
    }
    ///if(max_degree >= 180) max_degree = 360 - max_degree;
    cout << max_degree << endl;
}
