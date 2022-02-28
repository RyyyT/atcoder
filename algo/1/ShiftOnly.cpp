#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, 0, N) cin >> a[i];

    int count = 0;
    bool can = true;
    while(can){
        rep(i, 0, N){
            if(a[i]%2 != 0){
                can = false;
            }else{
                a[i] /= 2;
            }
        }
        count++;
    }
    cout << count-1 << endl;
    return 0;
}