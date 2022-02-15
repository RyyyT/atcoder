#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int maxfun(vector<vector<int>> d){
    int m;
    if(d.size() == 1) return d.at(0).at(0);
    else{
        for(int i=0; i<d.at(0).size(); i++){
            vector<vector<int>> a = d;
            a.erase(a.begin()); a.erase(a.begin() + (i));
            m = max((d.at(0).at(i) ^ maxfun(a)), m);
        }
        return m;
    }
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> data;
    rep(i, 0, 2*N-1){
        vector<int> mini((2*N-1)-i);
        rep(j, 0, 2*N-1-i){
            cin >> mini.at(j);
        }
        data.push_back(mini);
    }
    int m = maxfun(data);
    cout << m << endl;
}
