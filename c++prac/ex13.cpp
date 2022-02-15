#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    int ave;
    cin >> N;
    vector<int> score(N);
    rep(i, 0, N){
        cin >> score.at(i);
    }
    rep(i, 0, N){
        ave += score.at(i);
    }
    ave /= N;
    rep(i, 0, N){
        if(score.at(i) > ave) cout << score.at(i) - ave << endl;
        else cout << ave - score.at(i) << endl;
    }
}
