#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N, M, n=0;
    cin >> N >> M;
    vector<string> local(N);
    vector<string> express(M);
    string now;
    rep(i, 0, N){
        cin >> local.at(i); 
    }
    rep(i, 0, M){
        cin >> express.at(i); 
    }

    rep(i, 0, M){
        now = express.at(i);
        rep(j, n, N){
            if(now == local.at(j)){
                cout << "Yes" << endl;
                n++;
                break;
            }else{
                cout << "No" << endl;
                n++;
            }
        }
    }
}
