#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int64_t N;
    cin >> N;
    int64_t min = N;
    int64_t a, c;
    rep(b, 0, 60){
        a = N / ((long long )1 << b);
        c = N - a*((long long)1 << b);
        if(a + b + c < min ) min = a+b+c;
    }
    cout << min << endl;
    return 0;
}