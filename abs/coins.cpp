#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int A, B, C, X, counter=0;
    cin >> A >> B >> C >> X;
    rep(i, 0, A+1){
        rep(j, 0, B+1){
            rep(k, 0, C+1){
                if(i*500 + j*100 + k*50 == X) counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}