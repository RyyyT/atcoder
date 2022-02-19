#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int x1, y1, x2, y2;
    bool flag = false;
    cin >> x1 >> y1 >> x2 >> y2;
    vector<vector<int>> p = {{x1-2, y1-1}, {x1-2, y1+1}, {x1-1, y1-2}, {x1-1, y1+2}, {x1+1, y1-2}, {x1+1, y1+2}, {x1+2, y1-1}, {x1+2, y1+1}};
    rep(i, 0, 8){
        int dif;
        dif = pow(p.at(i).at(0) - x2, 2) + pow(p.at(i).at(1) - y2, 2);
        if(dif == 5){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}