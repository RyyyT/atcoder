#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int K, S;
    cin >> K >> S;
    int x, y, z, count=0;
    for(x=0; x<=K; x++){
        for(y=0; y <= K; y++){
            z = S - x - y;
            if(0 <= z && z <= K) count++;
        }
    }
    cout << count << endl;
    return 0;
}