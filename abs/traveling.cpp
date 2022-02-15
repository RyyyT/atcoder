#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

bool judge(int t, int x, int y){
    if(t == abs(x) + abs(y)){
        return true;
    }else{
        return false;
    }
}

int main() {
    int N;
    cin >> N;
    int x, y, t, nextx=0, nexty=0, nextt=0;
    bool can = true;
    rep(i, 0, N){
        cin >> t >> x >> y;
        nextt = t - nextt;
        nextx = x - nextx;
        nexty = y - nexty;

        int steps = abs(nextx) + abs(nexty);
        if(steps <= nextt && steps%2 == nextt%2){
            continue;
        }else{
            can = false;
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}