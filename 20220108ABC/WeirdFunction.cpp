#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int f(int x){
    int ans;
    ans = x*x + 2*x + 3;
    return ans;
}
int main() {
    int t;
    cin >> t;
    cout << f(f(f(t) + t) + f(f(t))) << endl;
}
