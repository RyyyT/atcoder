#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int H;
    cin >> H;
    double ans;
    ans = sqrt(12800000 + H);
    ans *= sqrt(H);
    printf("%.9lf", ans);
    return 0;
}