#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, x, ave;
    cin >> a >> b;
    ave = (a + b) / 2;
    x = (a + b) % 2;
    ave += x;
    cout << ave << endl;
}
