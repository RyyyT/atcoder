#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

using vvi = vector<vector<int>>;
using vi = vector<int>;

int main() {
    int N;
    cin >> N;
    vvi xy(N, vector<int>(2));
    rep(i, 0, N){
        cin >> xy[i][1] >> xy[i][0];
        xy[i].push_back(i);
    }
    string s;
    cin >> s;

    /*sort(xy.begin(), xy.end(), [&](vi a, vi b) {return a[1] < b[1];});*/
    sort(xy.begin(), xy.end());

    /*cout << endl;
    rep(i, 0, N){
        cout << xy[i][0] << " " << xy[i][1] << " " << xy[i][2] << " " << endl;
    }*/

    bool collision = false;
    rep(i, 1, N){
        if(xy[i][0] == xy[i-1][0]){
            if(s[xy[i-1][2]] == 'R' && s[xy[i][2]] == 'L'){
                collision = true;
                break;
            }
        }
    }

    if(collision) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}