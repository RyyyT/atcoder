#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    int Ntemp = N;
    vector<int> d(N);
    rep(i, 0, N) cin >> d.at(i);
    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());
    rep(i, 1, N){
        if(d.at(i) == d.at(i-1)){
            Ntemp--;
        }
    }
    cout << Ntemp << endl;
    return 0;
}