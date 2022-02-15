#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, 0, N){
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int ascore=0, bscore=0;
    rep(i, 0, N){
        if(i%2==0) ascore += a.at(i);
        else bscore += a.at(i);
    }
    cout << ascore - bscore << endl;
    return 0;
}