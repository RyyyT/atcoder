#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    double p;
    if(X <= A) p = 1;
    else if(X > B) p = 0;
    else{
        p = (double) C / (double) (B-A);
    }
    printf("%.12lf\n", p);
    return 0;
}