#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    int plan1, plan2;
    cin >> n >> a >> b;
    plan1 = a * n;
    plan2 = b;
    if(plan1 < plan2) cout << plan1 << endl;
    else cout << plan2 << endl;
}
