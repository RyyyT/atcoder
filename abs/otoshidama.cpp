#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N, Y;
    cin >> N >> Y;
    int x, y, z;
    rep(x, 0, N+1){
        rep(y, 0, N+1-x){
            z = N - x - y;
            if(1000*x + 5000*y + 10000*z == Y){
                cout << z << " " << y << " " << x << endl;
                return 0;
            }
        }
    }
    x = y = z = -1;
    cout << z << " " << y << " " << x << endl;
    return 0;
}