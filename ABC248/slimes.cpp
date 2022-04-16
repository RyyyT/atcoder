#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    long long a, b, k;
    cin >> a >> b >> k;
    long long count = 0;
    while(a < b){
        a *= k;
        count ++;
    }
    cout << count << endl;
    return 0;
}