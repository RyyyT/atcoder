#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    int left , right;
    cin >> a >> b >> c >> d;
    left = a + b;
    right = c + d;
    if(left > right) cout << "Left" << endl;
    else if(left < right) cout << "Right" << endl;
    else cout << "Balanced" << endl;
}
