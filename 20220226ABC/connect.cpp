#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int main() {
    int N;
    cin >> N;
    vector<string> s(N);
    rep(i, 0, N) cin >> s.at(i);

    int cnt;
    rep(i, 0, N){
        rep(j, 0, N-6+1){
            cnt = 0;
            string six = s.at(i).substr(j, 6);
            rep(k, 0, 6){
                if(six.at(k) == '#') cnt++;
            }
            if(cnt >= 4){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    rep(i, 0, N){
        rep(j, 0, N-6+1){
            cnt = 0;
            rep(k, 0, 6){
                if(s.at(j+k).at(i) == '#') cnt++;
            }
            if(cnt >= 4){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    
    rep(j, 0, N-6+1){
        cnt = 0;
        rep(k, 0, 6){
            if(s.at(j+k).at(j+k) == '#') cnt++;
        }
        
        if(cnt >= 4){
            cout << "Yes" << endl;
            return 0;
        }
    }  

    rep(i, 0, N-6+1){
        cnt  = 0;
        rep(j, 0, N-6+1){

        }
    }


    rep(j, 0, N-6+1){
        cnt = 0;
        rep(k, 0, 6){
            if(s.at(j+k).at(N-1-j-k) == '#') cnt++;
        }
        
        if(cnt >= 4){
            cout << "Yes" << endl;
            return 0;
        }
    }     

    cout << "No" << endl;
    return 0;
}