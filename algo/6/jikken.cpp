#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    vector<int> a = {1, 62, 624, 634, 859};
    int d = a.end() - upper_bound(a.begin(), a.end(), 859);
    cout << d << endl;
    return 0;
}