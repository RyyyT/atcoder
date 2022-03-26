#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if(A>C) cout << "Aoki" << endl;
    else if(C>A) cout << "Takahashi" << endl;
    else{
        if(B>D) cout << "Aoki" << endl;
        else cout << "Takahashi" << endl;
    }
    return 0;
}