#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int A, B, C;
    int maximum, minimmum;
    cin >> A >> B >> C;
    maximum = max(A, B);
    maximum = max(maximum, C);
    minimmum = min(A, B);
    minimmum = min(minimmum, C);
    cout << maximum - minimmum << endl;
}
