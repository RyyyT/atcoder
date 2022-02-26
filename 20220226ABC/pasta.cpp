#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main() {
    int N, M;
    cin >> N >> M;
    
    bool can;
    vector<int> a(N);
    vector<int> b(M);

    rep(i, 0, N){
        cin >> a.at(i);
    }

    rep(i, 0, M){
        can = false;
        cin >> b.at(i);
        rep(j, 0, N){
            if(a.at(j) == b.at(i)){
                a.at(j) = 0;
                can = true;
                break;
            }
        }
        if(!can){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}